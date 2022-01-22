## 必掌握命令    
gcc -g ###  (编译程序使其可调试)
gdb a.out

# 1 
run / r   
程序运行

# 2
quit / q
推出

# 3
break / b 
打断点(可以在函数或源程序行号处打断点)  

# 4 
list / l
查看源代码

# 5
next / n
继续执行下一行代码

# 6 
continue / c
继续run

# 7
info / i
查看信息，如(info b 查看断点情况） (info watchpoints 查看参数追踪) 

# 8
print / p  
打印变量

# 9 
step / s
单步进入函数 

# 10 
watch(不可缩写)  
参数观察点  


# 小技巧
shell 命令
可以在gdb里面使用shell命令
set logging on  
开启日志功能    
   
