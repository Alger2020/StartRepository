# C++语言对C语言语法的扩充  
## 1. 数据的输入与输出  
* ### C语言的输入输出  
	* 输入/输出函数，例如`scanf`、`printf`等  
	* 头文件:`#include<stdio.h>`  

* ### C++语言的输入与输出  
	* 将提供输入数据的数据源称作输入数据流   
	* 将输出数据时的目的地称作输出数据流  
	* 输入数据流和输出数据流统称为输入/输出流  

* ### 标准输入/输出流  
	* 键盘（cin）、显示器（cout）  	
	* 相关声明语句  
	> #include<iostream>  //标准输入/输出流的头文件  
	> using namespace std;  //声明命名空间std    

## 2. 变量初始化及常变量  
* ### 变量初始化  
	int x=10,y;  //c语言风格  
	int x(19),y;  //c++语言风格  

* ### C语言中的符号常量  
	`#define PI 3.14`  

* ### C++语言引入了常变量   
	`const 数据类型 常变量名 = 初始值  `
	* 使用const关键字指定常变量；
	* 定义常变量时**必须初始化**；
	* 常变量的值不能被改变，例如不能被再次赋值。  
  
## 3. 引用及函数间参数的引用传递  
* ### 访问变量内存单元  
	假设，已定义变量：int x=10;  
	* 变量名访问：cout<<x;  
	* 指针访问：int* p; p=&x; cout<<(*p);  
	* C++语言新增了引用访问  

* ### 变量的直接访问与间接访问  
	引用与指针访问都是间接访问  

* ### 引用  
	`引用类型& 引用变量 = 被引用变量名;`  
	`int& xa =x;  cout<<xa;`  
	* **引用类型**是引用变量的数据类型，必须与被引用变量的类型一致；  
	* **&**是引用变量说明符，定义变量语句中，变量名前加"&"表示该变量为引用变量；  
	* **引用变量名**需符号标识符的命名规则；  
	* **被引用变量名**指定被引用的变量，改变量必须是一个已经定义的变量；  
	* 定义引用变量时必须初始化，即指定其是哪个变量的引用，引用变量只能引用一个变量，定义后不能在引用其他变量。  

* ### 函数间参数的传递  
	* 值传递  
	* 指针传递    
	`void swap(int* a, int& b);`  
	* 引用传递  
	`void swap(int& a, int& b);`
	* 引用传递特点  
		* 引用传递将被调函数的形参定义成主调函数中实参变量的引用，被调函数通过该引用间接访问主调函数中的变量。  
		* 被调函数修改形参实际上修改的是对应的实参。换句话说，主调函数可以通过引用将数据传给被调函数，被调函数也可以通过该引用修改实参的值将数据传回主调函数。引用传递是一种双向数据传递机制。
		* 引用传递时，实参必须是变量。  
		* 引用传递的好处：一是形参直接引用实参，不需分配内存、传递数值，这样可以提高函数调用速度，减低内存占用；二是可以通过引用实现双向数据传递。

## 4. 几种特殊形式的函数  
* ### 带默认参数值函数的语法细则  
	* 带默认值的形参——调用是然后给实参则将实参值赋给形参，否则把默认值赋给形参。其他不带默认值的形参必须给出实参，否则语法错误。
	* 在函数原型声明中指定默认值——如果函数定义在调用语句之后，应该对函数原型进行声明，可以在声明中指定形参的默认值，此时函数定义中不能再指定默认值。函数具有文件作用域，同一函数在同一作用域中只能指定一次默认值；如果函数定义在其他文件中，应该在调用语句之前声明外部函数的原型，可以在声明语句指定形参在本文件的默认值，并且可以与原函数的默认值不同。  
	* 同一函数在不同作用域中可以指定不同的默认值  
	* 带默认值的形参必须定义在形参列表的后面    

* ### 重载函数  
	* C语言中的函数不能重名  
	* C++
	> 如果两个函数的形参个数不同，或数据类型不同，那么这两个函数就可以重名。重名的函数被称为重载函数    
	> 如果两个函数只是返回值类型不同或形参变量名不同，则不能命名为重载函数，否则为语法错误。    

* ### 内联函数  
	* 调用函数  
	> 函数跳转和数据传递需要执行一些额外的操作。实现相同功能，单一主函数比主函数+子函数程序的执行速度要快，即函数跳转会降低程序的执行效率  
	* 内联函数  
	> 内联函数是一种特殊的函数，它在保证程序开发效率的同时，不降低程序的执行效率。其原理是：编译源程序时将函数代码直接嵌入到每一个调用语句处，而在执行时不再进行函数跳转和数据传递  
	> 内联函数需要是简单函数，编译器不能保证程序员定义或声明的内联函数最终都按照内联函数进行编译。如果函数比较复杂，编译器将自动按非内联函数编译。  
	> 定义的函数头前面加入`Inline` `Inline int swap (int a, int b)`
	> 类的内联函数定义需进一步搞清

## 5. 命名空间  
* ### 在命名空间中定义函数和全局变量  
```c++
namespace Tom 
{
	int x,y;  
	void fun1(){};  
	void fun2(){};
}

namspace Toy 
{
	int x,y;
	void fun1(){};
	void fun2(){};
}
```  
* ### 访问命名空间中的函数和全局变量  
```c++  
Tom::x=10; Tom::y=20;  //访问Tom命名空间中的全局变量  
Tom::fun1(); Tom::fun2();  //调用Tom命名空间中的函数
Toy::x=10; Toy::y=20;  //访问Toy命名空间中的全局变量  
Toy::fun1(); Toy::fun2();  //调用Toy命名空间中的函数

using Tom::x;  //先单独声明各标识符的命名空间
using TOM::y;
using Toy::fun1;
using Toy::fun2;
x=10;y=2;  //访问Tom命名空间中的全局变量
fun1();fun2(); //调用Toy命名空间中的函数  

using namespace Tom;  //先讨=统一声明命名空间里的所有标识符  
x=10;y=20;  //再通过标识符访问。访问时可忽略命名空间  
fun1();fun2();

using namespace std; //声明标准命名空间  
```

## 6. 动态内存分配  
* ### c语言  
	* 分配内存：malloc函数  
	* 释放内存：free函数  

* ### c++语言  
	* 分配内存：new运算符  
	* 释放内存：delete运算符  
	* 单个变量的动态分配与释放  
	```c++
	指针名变量名=new 数据类型(初始值);  
	delete 指针变量名；    
	```
	语法说明：  
	* **数据类型**指定动态分配变量的数据类型；  
	* **(初始值)**指定所分配内存单元的初始值（用小括号括起来），即变量的初始化。如果不需要初始化，“（初始值）”则可以忽略；  
	* 计算机执行**new**运算符时将按照数据类型指定的字节数分配内存空间并初始化，然后返回所分配内存单元的首地址。应当通过赋值语句将该首地址保存到一个预先定义好的同类型指针变量中；  
	* 计算机执行**delete**运算符时将按照**指针变量**中的地址释放指定的内存单元。  

	```c++  
	指针变量名 = new 数据类型[整数表达式]；  
	delete[]指针变量名；  
	```  
	语法说明：
	* **数据类型**指定动态分配数组变量的数据类型；  
	* **表达式**指定一维数组的元素个数，用中括号'[]'括起来。表达式可以是单个变量、变量或是一个整数表达式，其结果必须为正整数；  
	* 计算机执行**new**运算符时将按照数据类型和元素个数分配相应字节的内存空间，然后返回所分配内存单元的首地址。应当通过赋值语句将该首地址保存到一个预先定义好的同类型指针变量中。注：动态分配的数组变量不能初始化；  
	* 计算机执行**delete**运算符时将按照**指针变量**中的地址释放指定的内存单元，'[]'表示所释放的内存空间是一个数组，其中包含多个内存单元，应同时释放。  

