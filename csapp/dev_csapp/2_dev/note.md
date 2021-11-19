# 1
虽然文件间不声明也可以编译成功编译链接没有问题，但存在风险在P1文件中函数为double max(double a),P2文件中main()函数中使用max();但P2文件中没有相关声明，编译器会默认把max()函数当成int max(int a)编译，然后链接时也可以链接到double max(double a)，但这样相关汇编代码是错误的不会得到正确的答案。 


# 2
siezof()返回size_t类型；size_t类型在32位程序中为unsigned int;在64位程序中为unsingned long;
