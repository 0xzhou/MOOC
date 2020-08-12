## Lecture 2

'Ctrl+l': clean lines in python interpreter



**name:** using assign method

**assign:** "=", can also be used to functions---two names mean same function



- Expressions:
  - Primitive expressions
  - Call expressions
- Environment Diagrams: visualize the interpreter's process, keep track on the names and values.
- Defining Function:
  - Assignment is a simple means of abstraction: binds names to values
  - Function definition is a more powerful means of abstraction: binds name to expression
- Function: 
  - signature: indicates how many arguments a function take
  - body: defines the computational process expressed by a function
- Procedure for calling/applying user-defined functions:
  1. Adding a local frame, forming a *new* environment
  2. Bind the function's *formal parameter(形参)* to its *arguments(实参)* in that frame
  3. Execute the body of the function in that new environment



What is **None** in python?

None indicates that nothing is returned, represents nothing in python. A function that does not explicitly return a value will return **None**, **None** is not displayed by the interpreter as the  value of an expression.



Pure Functions & Non-Pure Functions

Pure functions just return values, Non-Pure functions have side effects, which is not a value, it's anything that happens as a consequence of calling a functions. Like the build-in functions `print()` in Python, `print()` has the side effect, which display the input of cmd, but returns **None** !

example: 

> '>>>' print(print(1),print(2))
>
> 1
>
> 2
>
> None None

