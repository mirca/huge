#-----------------------------------------------------------------------#
# Package: High-dimensional Undirected Graph Estimation                 #
# huge.mbgel(): Meinshausen & Buhlmann graph estimation (mb)            #
#-----------------------------------------------------------------------#

## Main function
huge.mb = function(x, lambda = NULL, nlambda = NULL, lambda.min.ratio = NULL, sym = "or", verbose = TRUE)
{
	gcinfo(FALSE)
	n = nrow(x);
	d = ncol(x);
	fit = list()
	fit$cov.input = isSymmetric(x);
	if(fit$cov.input)
	{
		if(verbose) cat("The input is identified as the covariance matrix.\n")
		S = cov2cor(x);
	}
	if(!fit$cov.input)
	{
		x = scale(x)
		S = cor(x)
	}

	gc()

	if(!is.null(lambda)) nlambda = length(lambda)
	if(is.null(lambda))
	{
		if(is.null(nlambda))
			nlambda = 10
		if(is.null(lambda.min.ratio))
			lambda.min.ratio = 0.1
		lambda.max = max(max(S-diag(d)),-min(S-diag(d)))
		lambda.min = lambda.min.ratio*lambda.max
		lambda = exp(seq(log(lambda.max), log(lambda.min), length = nlambda))
		rm(lambda.max,lambda.min,lambda.min.ratio)
		gc()
	}
	maxdf = min(d,n);

	if(verbose)
	{
	  cat("Conducting Meinshausen & Buhlmann graph estimation (mb)....")
	  flush.console()
	}
	fit$idx_mat = NULL
	out = .Call("_huge_SPMBgraphlasso", x, lambda, nlambda, d, as.double(rep(0,d*maxdf*nlambda)),as.integer(rep(0,d+1)), as.integer(rep(0,d*maxdf*nlambda)))
	for(i in 1:d)
	{
	  if(out$col_cnz[i+1]>out$col_cnz[i])
	  {
	    idx.tmp = (out$col_cnz[i]+1):out$col_cnz[i+1]
	    ord = order(out$row_idx[idx.tmp])
	    out$row_idx[idx.tmp] = out$row_idx[ord + out$col_cnz[i]]
	    out$x[idx.tmp] = out$x[ord + out$col_cnz[i]]
	  }
	}


  G = new("dgCMatrix", Dim = as.integer(c(d*nlambda,d)), x = as.vector(out$x[1:out$col_cnz[d+1]]),p = as.integer(out$col_cnz), i = as.integer(out$row_idx[1:out$col_cnz[d+1]]))

	fit$beta = list()
	fit$path = list()
	fit$df = matrix(0,d,nlambda)
	fit$rss = matrix(0,d,nlambda)
	fit$sparsity = rep(0,nlambda)
	for(i in 1:nlambda)
	{
		fit$beta[[i]] = G[((i-1)*d+1):(i*d),]
		fit$path[[i]] = abs(fit$beta[[i]])
		fit$df[,i] = apply(sign(fit$path[[i]]),2,sum)

		if(sym == "or")
			fit$path[[i]] = sign(fit$path[[i]] + t(as.matrix(fit$path[[i]])))
		if(sym == "and")
			fit$path[[i]] = sign(fit$path[[i]] * t(fit$path[[i]]))
		fit$sparsity[i] = sum(fit$path[[i]])/d/(d-1)
	}
	fit$icov = out$icov
 	rm(x, G, out)

 	fit$lambda = lambda

	if(verbose)
 	{
 		cat("done\n")
      flush.console()
  }

 	rm(verbose,nlambda)
 	gc()
 	return(fit)
}
