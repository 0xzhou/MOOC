#### Return

A return statement completes the evaluation of a call expression and provides its value.

```python
def search(f): # high-order function
	x=0
	while not f(x):
		x+=1
    return x
        
def is_three(x):
	return x==3

def positive(x):
    return max(0,square(x)-100)

def inverse(f):
    """Return g(y) such that g(f(x))->x."""
    return lambda y: search(lamda x: f(x)==y)
    
```

`search`函数的功能是：返回一个使输入函数成立的非负整数自变量。

`inverse`函数的参数也是一个函数f，它返回f的反函数g。`inverse()`的设计非常巧妙。

由反函数的定义知道，若f(x)=y, 则g(y)=g(f(x))=x。

`inverse()`这里涉及到很多个函数，需要另外再讨论一下，设f1作为一个函数，是传入`inverse()`的参数，`inverse()`返回的是f1的反函数，反函数的自变量是 y, 这里其实无所谓，叫w,m...都可以，只要它是**由f1映射得到**的, 比如说f1->w。

联系到之前定义的`search`函数的功能：找出一个函数成立的非负整数自变量。`search()`的参数也是函数，我们设参数函数的自变量是k(这里希望和search()中的x区别开来)，它满足f1(k)==w。所以函数也可以写成：

```python
def inverse(f1):
	return lambda w: search(lambda k: f1(k)== w)
# 经过验证，可以实现相同功能
```

 

#### Self-Reference(自指)



```python
def print_all(x):
	print(x)
	return print_sum
	
print_all(1)(3)(4)	
```



#### Control

**conditional statements:**

"if" clause, "else" clause: 只会执行一个

注意为什么不把if-else语句放进函数执行的原因。



#### Contral Expression:

**Logical Operators:** `and` , `or`

注意: 逻辑操作中，总是先执行左边再执行右边，若左边不符合要求时，直接返回该语句。

```python
def has_big_sqrt(x):
	return x>0 and sqrt(x)>10
```

```shell
>>>has_big_sqrt(-1000):
False
```

这里没有引起Exception!!!

```python
def reasonable(n):
	return n==0 or 1/n!=0 
```



**Conditional Expression:**

`<consequence> if <predicate> else <alternative>` 

1. Evaluate the `<predicate>` expression.
2. If it's a true value, the value of the whole expression is the value of the `<consequence>`.
3. Otherwise, the value of the whole expression is the value of the `<alternative>`.

```python
abs(1/x if x!=0 else 0)
```





