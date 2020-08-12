# CS61A: Structure and Interpretation of Computer Programs



My study of this course is based on the Spring 2020.

## Notes

### Lecture1 Intro

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



### Lecture2 Functions

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
  
    

### Lecture3 Control 

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



### Lecture4 Higher-Order Functions 

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





## Content

- [ ] Week1
  - [ ] video
    - [x] Lecture1: Functions
    - [x] Lecture2: Names
  - [ ] Homework: HW 01
  - [ ] Lab 00
  - [ ] Disc 00
- [x] Week2
  - [x] video
    - [x] Lecture3: Control
    - [x] Lecture4: Higher-Order Functions
    - [x] Lecture5: Environments
  - [x] HW 02
  - [ ] Lab 01:
    - [x] Required Questions
    - [ ] Optional Questions
  - [ ] Disc 01
- [ ] Week3
  - [ ] video
    - [x] Lecture6: Iteration
    - [x] Lecture7: Design
    - [ ] Function8: Function Examples
  - [ ] Hog Contest
  - [ ] Lab 02
  - [ ] Disc 02
- [ ] Week4
  - [ ] video
    - [x] Lecture9: Recursion
    - [x] Lecture10: Tree Recursion
  - [ ] Disc 03
  - [ ] HW 03
- [ ] Week5
  - [ ] video
    - [ ] Lecture11: Containers
    - [ ] Lecture12: Data Abstraction
    - [ ] Lecture13: Trees