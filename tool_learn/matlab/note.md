# 常用数学函数   
自然指数 exp（）  
三角函数有以弧度为单位的函数和以角度为单位的函数，如果是以角度为单位的函数就在函数名后面加“d”，以示区别。  
abs函数可以求实数的绝对值、复数的模、字符串的ASCII码值。   
用于取整的函数有fix,floor,ceil,round. round函数按照四舍五入的规则取整  ceil函数是向上取整  floor函数是向下取整 fix函数是舍去小数取整   
mod函数求余
isprime(n)判断n是否素数
find函数判断向量不为零的序列
sqrt()开平方根号


# 变量与赋值语句   
变量名以字母开头，后接下划线与数字  字母区分大小写   
标准函数名以小写字母命名   
预定义变量：ans i j pi NaN   

# 变量的管理   
who whos 查看存在的变量  
save命令：创建内存变量文件 
load命令： 装入内存变量文件   >> save mydata a x // save mydata // load mydata a x // load mydata    



# 矩阵的建立  
利用直接输入法建立矩阵：将矩阵的元素用中括号括起来，按矩阵行的顺序输入各元素，同一行的各元素之间用逗号或空格分隔，不同行的元素之间用分号分隔   
利用已建好的矩阵建立更大的矩阵
可以用实部矩阵和虚部矩阵构成复数矩阵    
向量是矩阵的特殊类型可以用冒号表达式建立向量   格式：  e1(初始值):e2（步长 默认为1）:e3（终止值）  
行向量还可以用linspace（a（第一个元素），b（最后一个元素），n（元素总数，当n省略时，自动生成100个））
结构矩阵 格式为：   结构矩阵元素.成员名=表达式   
单元矩阵   建立单元矩阵和一般矩阵相似，直接输入就可以了，只是单元矩阵用大括号括起来   