### Environments



**Higher-Order Functions:** A function that takes a function as an argument value or returns a function as a return value.



**Nested Definition:** 

* Every user-defined functions has a parent frame(often global)
* The parent of a function is the frame in which is was defined
* Every local frame has a parent frame(often global)
* The parent of a frame is the parent of the function called

caution!: parent frame

```python
def make_adder(n):
	def adder(k):
		return k+n
	return adder
```



**Local Names:**

An environment is a sequence of frames.

The environment created by calling a top-level function(no def within def) consists of one local frame, followed by the global frame.



**Lambda Expressions**

**Lambda**表达了python中用于创建**匿名**函数的特殊语法。表达式可以理解为一个小的匿名函数，但只能有**一个表达式**，具体表达式如下：

```python
lambda argument: manipulate argument
```

`argument`就是这个匿名函数传入的函数，冒号后面是我们对这个参数的操作方法。

`lambda` is a function with formal parameter. It is no "return" keyword and mush includes **only a single expression**.

`lambda` function has **no intrinsic function name**. When we call it, it actually call the function $\lambda$.

