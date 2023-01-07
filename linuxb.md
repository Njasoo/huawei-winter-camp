# 查看电脑的ip地址

- ipconfig

# c语言文件输入

- ./文件名 < 输入文件名.txt

# grep

- grep 关键字 文件名 (显示含有关键字的行)
- grep -c 关键字 文件名 (显示含有关键字的行数)

# 管道符 | (将前面命令的输出作为后面命令的输入)
- cat hello.c | grep int
- cat hello.c | grep -c int

# vim
- cc和dd的区别就是cc删除一行之后会顺便进入insert mode

# nano
- ctrl + x退出，如果需要保存，编辑器在退出时会问你

# ps (显示进程)
- ps -l (仅查看自己的bash相关进程)
- ps aux (查看系统所有进程)
