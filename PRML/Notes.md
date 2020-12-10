## Introduction

### Probability Theory

Probability theory provides a consistent framework for the quantification and manipulation of uncertainty and forms one of the central foundations for pattern recognition.

*random variable*: a variable or event, which changes. denoted as $X$

- random variable has *values*: denoted as $X = x$ , mean the variable equals $x$

*sum rule:* $p(X=x_i)=\sum_{j=1}^Lp(X=x_i, Y=y_j)$

- $p(X=x_i)$ is also called *marginal probability*

*conditional probability:* $p(Y=y_j|X=x_i)=\frac {n_{ij}}{c_i}$

- *product rule of probability* $P(X=x_i,Y=y_j)=p(Y=y_j|X=x_i)p(X=x_i)$

*joint probability:* $p(X,Y)$



**Bayes' theorem:** Bayes’ theorem was used to convert a prior probability into a posterior probability by incorporating the evidence provided by the observed data.

$p(Y|X)=\frac {p(X|Y)p(Y)}{p(X)}=\frac {p(X|Y)p(Y)}{\sum_Yp(X|Y)P(Y)}$

- priori probability: before observe any data instance
- posteriori probability: after we observed some data

- evidence: outweigh the priori



*probability density*:  $p(x ∈ (a, b)) =\int _a^bp(x) dx$, $X$ is the continuous variable

![](https://raw.githubusercontent.com/Mingy2018/Markdown-photoes/master/img/20200828155128.png)

*cumulative distribution function*： $P(z) =\int _{−∞}^zp(x) dx$

*expectation* of some function $f(x)$ under a probability of distribution $p(x)$:  $E[f] =\sum_xp(x)f(x)=\int p(x)f(x)dx$

- $E_x[f(x, y)]$: denotes the average of the function $f(x, y)$ with respect to the distribution of $x$. Note that $E_x[f(x, y)]$ will be a function of $y$
- *conditional expectation:* $E_x[f|y] =\sum_x p(x|y)f(x)$



*variance* of $f(x)$:  $var[f] = E[f(x) − E[f(x)]]^2$

- provides a measure of how much variability there is in f(x) around its mean

*covariance*: $cov[x, y] = E_{x,y} [\{x − E[x]\}\{y − E[y]\}]
= E_{x,y}[xy] − E[x]E[y]$

- expresses the extent to which x and y vary together. If x and y are independent, then their covariance vanishes.

















