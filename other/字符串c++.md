### 字符串

#### C风格字符串 - C-style character string

是由单个字符构成的**字符数组**，并且以**空字符结束**(null terminated)，且将空格，缩进，换行符都视作一个整体内的内容。

- C标准库 String 函数

  - 定义在 `cstring` 头文件中: 

    ```c++
    #include<cstring>
    ```

  - `strlen(p)`: 计算字符串 `p` 的长度

  - `strcpy(p1,p2)`: 将 `p2` 拷贝给 `p1` ，返回 `p1`

  - `strcat(p1,p2) `: 连接 `p1`, `p2`

- [ ] `strcmp(p1,p2)` 字符串怎么比较大小 ？

#### C++中的 String 类

string是标准库类型，支持**可变长字符串**(!), 使用 string 类型必须首先包含 string 头文件。作为标准库的一部分, string定义在命名空间std中。

使用string包含以下代码:

```c++
#include<string>
using std::string
```

##### 定义和初始化 string 对象

```c++
string s1 = "mueller" // a copy of string literal
//这里是用C风格字符串的字面值(string literal)初始化string, 除了最后那个空字符都拷贝到string中
string s2 = string(10, 'c')
```

**切记!** -- C++中字符串的字母值并不是标准库类型string对象，两个不同数据类型。

使用 `=` 执行的是拷贝初始化(copy initialization), 如果不用等号，则执行的是直接初始化(direct initialization)。

##### String 对象上的操作

- 读写string对象
  - 自动忽略开头空白(即空格符、换行符、制表符等)，从第一个字符读起，读到下一处空白 ( **!!** 这条性质和C风格字符串不同)
- 读取未知数量的string对象

```c++
while( cin >> word)
	cout << word << endl;
```

- 读取一整行(保留空白符) : `getline()`
  - `getline( cin, line)`: 已遇到换行符就结束读取并返回结果，此时换行符已被读入，但不存到string对象中

##### 处理 String 对象中的字符

