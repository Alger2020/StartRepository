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
