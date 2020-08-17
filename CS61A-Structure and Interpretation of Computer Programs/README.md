# CS61A: Structure and Interpretation of Computer Programs



My study of this course is based on the Spring 2020 and Sommer 2020.

## Notes

### Lecture1. Intro

* A course about managing complexity
  * mastering abstraction
  * programming paradigms

* Course Policies:
  * Learning: work hard
  * Community: work with other people, explain knowledge to other people
  * EPA (Efforts, Participation, Altruism)
* Expressions

Call Expression: 调用表达---operator,operand(运算对象)

Nested Expression: 嵌套表达



### Lecture2. Functions

*tips:*  `Ctrl+l`:  clean lines in python interpreter



**name:** using assign method

**assign:** "=", can also be used to functions---two names mean same function



- Expressions:

  - Primitive expressions
  - Call expressions

- Environment diagrams: visualize the interpreter's process, keep track on the names and values.

- Defining Functions:

  - Assignment is a simple means of abstraction: binds names to values
  - Function definition is a more powerful means of abstraction: binds name to expressions

- Function: 

  - function signature(函数签名): indicates the name of function and how many arguments it takes
  - function body: defines the computational process expressed by a function

- Procedure for calling/applying user-defined functions(in environment diagrams):

  1. Adding a local frame, forming a *new* environment

     *A function's signature has all the information needed to create a local frame*

  2. Bind the function's *formal parameter(形参)* to its *arguments(实参)* in that frame

  3. Execute the body of the function in that new environment

- Names in Environment: every expression is evaluated in the context of an environment
  - the global frame
  
  - local frame
  
  - **Most important:** An environment is a sequence of frames. A name evaluates to the value bound to that name in the earliest frame of the current environment in which that name is found.
  
    

### Lecture3. Control 

- `None` in python:
  - None indicates that nothing is returned, represents nothing in python
  - *Careful:*  `None` is not displayed by the interpreter as the value of an expression; A function that does not explicitly return a value will return `None`
  
- Pure Functions & Non-Pure Functions

  Pure functions just return values, Non-Pure functions have side effects, which is not a value, it's anything that happens as a consequence of calling a functions. Like the build-in functions `print()` in Python, `print()` has the side effect, which display the input of cmd, but it returns **None** !

  ```python
  >>> print(print(1),print(2))
  1
  2
  None None
  ```

  

*tips:* `python -i xxx.py` : run a python file in interactive mode

查看变量的值

- Boolean Contexts
  - False value in Python: False, 0, ' ', None(more to come)
- True value: anything else



### Lecture4. Higher-Order Functions 

**Higher-Order Functions:** A function that takes a function as an argument value or returns a function as a return value.



- Generalizing 

  - patterns  with arguments
  - over computational processes

- Functions as return values

  - Functions defined within other function bodies are bound to names in a local frame

- Function Composition

- Function Abstraction

  - Names should convey the meaning or purpose of the values to which they are bound

  - The type of value bound to the name is best documented in a function's docstring

  - Function names typically convey their effect (**print**), their behavior (**triple**), or the value returned (**abs**).

    

### Lecture5. Environments Diagrams

#### Lambda Expressions

**Lambda**表达了python中用于创建**匿名**函数的特殊语法。表达式可以理解为一个小的匿名函数，但只能有**一个表达式**，具体表达式如下：

```python
lambda argument: manipulate argument
```

`argument`就是这个匿名函数传入的函数，冒号后面是我们对这个参数的操作方法。

`lambda` is a function with formal parameter. It is no "return" keyword and mush includes **only a single expression**.

`lambda` function has **no intrinsic function name**. When we call it, it actually call the function $\lambda$.



### Lecture6. Recursion

#### Recursive Functions(递归函数)

A function calls itself in the function body:

* conditional statement check for **base cases**: without recursive calls
* **recursive cases**: with recursive calls

#### Recursion in Environment Diagrams

​                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

example: sum digits, factorial function



**Iteration vs Recursion:**

Iteration is a special case of recursion.



#### Mutual Recursion

2 Functions call each other.



### Lecture7.  Tree Recursion

### Lecture8.  Sequences & Data Abstraction






