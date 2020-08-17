## Lecture 4 The Fibonacci Sequence: 

- the golden spiral(natural)

- **iteration**---not use the `list` type

  ```python
  def fib(n):
      pred,curr=0,1 # 0th and 1st Fibonacci Number
      k=1
      while k<n:
          pred,curr=curr,curr+pred
      	k+=1
      return curr
  # not include the n=0 situation
  ```



Designing Functions:

- domain(input) & range(output)
- behavior: relationship between input and output of function



