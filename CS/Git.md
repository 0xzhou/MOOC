### 多次提交

提交的产生分为两个步骤：

- 用 `add` 命令将所有修改纳入到一个缓存区(buffer)中
- `commit` 暂存区到版本库



将 `test.txt` 移出暂存区

```shell
git reset HEAD test.txt
```

选择性提交

```shell
git add foo.txt bar.txt # select files
git add dir/ # a directory and everything in it
git add . # current directory and everything in it
```



#### 暂存区命令

```shell
git diff --staged # difference staging vs. repository
git diff # difference staging vs. workspace
```



#### .gitignore

将自动生成的文件，由编辑器创建或者用于备份的临时文件，我们不希望它们在版本控制之下

- 在项目根目录的新建 `.gitignore` 文件

```shell
vim .gitignore
```

- 设置过滤内容

  - ```
    /test/ # test/ at current dict
    test/ # all test/ in the project
    *.txt # all .txt files
    ```

- `.gitignore` **只能影响那些还未交由 Git 来管理的文件**，如果文件已经被现有的版本包含了，需要另外处理

  - ```shell
    git rm -r --cached test/ #清除项目中test目录下的所有缓存
    ```

  - 提交和上传

    



