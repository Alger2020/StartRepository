* A .cpp file is a compile unit   
* Only declarations are allowed to be in .h  
	* extern variables  
	* function prototypes  
	* class/struct declaration   
* Standard header file structure   
```c++
#ifndef ZHAIJINGHE 
#define ZHAIJINGHE  
//Type declaration here......
#endif
```  
*******
* c++编译包括具体四步骤**预处理 编译 汇编 链接** 
* 在前三步骤是以单.cpp文件为单位，进行**预处理 编译 汇编**，只检查语法错误与是否对使用内容声明 。最后步骤**链接**会链接各相关文件。
* .h文件不能含有**definitions**，否则**链接**会重复definition.`class/struct`例外，应该是c++编译器在步骤**链接**时对这些**特殊内容**进行处理了。
* `Standard header file structure`头文件标准结构**只是对单文件**在**预处理**步骤进行处理，保证单.cpp文件在前三步骤不会重复definition。
* 编译时不用编译.h文件。


## 2021.11.8  


* link 只是将main.o和库函数链接起来，所以自己写的文件要一起操作   在命令行即gcc main.o other.o    不能gcc main.o  而没有other.o      所以在GUI页面多文件需要建立一个项目， 单文件无法链接


* #include不是用来引入库的 
* stdio.h里只有printf的原型，printf的代码在另外的地方
* 现在的c语言编译器默认会引入所有标准库，用不到的自动去掉   
* #include<stdio.h> 只是为了让编译器知道printf函数的原型，保证你调用时给出的参数值是正确的类型   .h文件放在使用的地方保证调用参数正确，在定义的地方保证定义的函数参数等等与使用对外公开的一致   .h只是桥梁   
* 一般的做法就是任何.c都有对应的同名的.h main.c除外，把所有对外公开的函数的原型和全局变量声明(extern)都放进去   
* int i；是变量的定义           extern int i;是变量的声明 ，不能在声明处初始化   ；
* 声明是不产生代码的东西     定义是产生代码的东西  
* 每个单文件为一个编译单元   
* 只有声明可以被放在头文件中  
	* 是规则不是法律  
* 否则会造成一个项目中多个编译单元里有重名的实体（struct class)
* 同一个编译单元里，同名的结构不能被声明  
* 如果你的头文件里有结构  类的声明，很难这个头文件不会在一个编译单元里被#inlude多次 
* 所有需要“标准头文件结构”   #ifndef A   #define A           #endif
* only decalrations are allowed to be in .h  
	* extern variables  
	* function protutyes  
	* class/struct declartion     (有点不一样） 




终极：1 link的时候引入标准库     自己写的其他文件需要在link的时候显示写出  main函数会自动在链接的库文件 other文件寻找对应的东西    .h没有用了 链接的时候
     2  .h文件只是一种规范，要求头文件在使用和定义处使用  相当于合同  在链接的时候没有特殊作用
	class/struct  比较特殊 其他声明可以重复定义   但他用到头文件标准结构





















