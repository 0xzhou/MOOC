传统ACM的OJ模式题目，提交的程序需要 stdin(标准输入) 读取输入，然后 stdout(标准输出) 来打印结果。OJ一次处理多个case，所以程序需要循环处理，一般通过while循环处理。

### 读入命令行数据

#### **Python**

- `line = sys.stdin.readline()`
  - `sys.stdin`是一个标准化输入的方法
  - 将标准输入全部获取，包括末尾的`'\n'`, 返回一个字符串(string)
  - `sys.stdin.readline().strip()`去掉末尾的换行符
    - `linelist = line.split( str="", num )`, 指定分隔符对字符串进行切片, 默认为所有的空字符，包括空格、换行(\n)、制表符(\t)等。 返回类型是 **<class 'list'>**。
    - `linelist = list(map(int, line.split()))`, 分割同时将字符串转化为整型，再构建列表，适用于整型输入，运算

```python
import sys
while True:
    try:
        line = sys.stdin.readline().strip()
        if line == '':
            break
        lines = line.split()
        print int(lines[0]) + int(lines[1])
    except:
        pass
```



- `sys.stdin.readlines()`
  - 输入多行数据，包括末尾的`'\n'`
  - 返回一个列表，每行输入为列表中一个字符串元素
  - 结束输入: Send **EOF**(end-of-file)
    - Linux System: `ctrl + D + Enter`
    - Windows System: `ctrl + Z + Enter`



- `in = input()`
  - 读取**一行输入**，并转换为string。所以`input()`返回**始终是字符串**。



#### C++



参考文献

[[ 1 ] 牛客网在线判题系统使用帮助](https://www.nowcoder.com/discuss/276)

[[ 2 ] 以华为2016年笔试题为例，详解牛客网的在线判题系统（OJ模式）](https://blog.nowcoder.net/n/34152f4e9f8444a7a4fa48ba48a4fd41)

