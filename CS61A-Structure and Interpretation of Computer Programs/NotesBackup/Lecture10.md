### Lecture 10



#### The Order of Recursive Calls

```python
def cascade(n):
	if n<10:
		print(n)
	else:
		print(n)
		cascade(n//10)
		print(n)
```

输出很妙！！！！



#### Tree Recursion

当计算fib(35)时候，已经计算比较缓慢

利用`from ucb import trace`来输出计算过程。

缺点：the process is highly repetitive; fib is called on the same argument multiple times.



#### Counting Partitions

* Recursive decomposition
* different choices

