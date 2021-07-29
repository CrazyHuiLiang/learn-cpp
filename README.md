# Learn c++

## 数据类型

### 程序中的数据

* 常量
* 变量

### 整数类型

* 基本整数类型 int
* 符号 (signed)
* 无符号(unsigned)
* short
* long
* long long

### 浮点数类型

* 单精度 float
* 双精度 double
* 扩展精度 long double

### 字符类型

* char

### 字符串类型

* 有字符串常量
* 基本类型中没有字符串变量
  * 采用字符数组存储字符串（c风格的字符串） 不推荐使用
* 标准c++类库中的String类（c++风格的字符串）

### 布尔类型

* true、false


## 函数

### 声明

```
类型标识符 被调用的函数名( 含类型说明的形参表 )
```

### 调用
```
函数名( 实参列表 )
```

## 类


### 构造

* 首先对构造函数初始化列表中列出的成员（包括基本类型成员和对象成员）进行初始化，初始化次序是成员在类体中定义的次序。
* 成员对象构造函数调用顺序：按对象成员的声明顺序，先声明者先构造。
* 初始化列表中未出现的成员对象，调用用默认构造函数（即无形参的）初始化
* 处理完初始化列表之后，再执行构造函数的函数体。

### 复制构造函数被调用的三种情况

* 定义一个对象时，以本类另一个对象作为初始值，发生复制构造；
* 如果函数的形参是类的对象，调用函数时，将使用实参对象初始化形参对象，发生复制构造；
* 如果函数的返回值是类的对象，函数执行完成返回主调函数时，将使用return语句中的对象初始化一个临时无名对象，传递给主调函数，此时发生复制构造。
  * 这种情况也可以通过移动构造避免不必要的复制


### UML

* 事物
* 关系
* 图


## 数据的共享与保护

### 作用域分类

* 函数原型作用域
* 局部作用域(块作用域)
* 类作用域
* 文件作用域
* 命名空间作用域


### 对象的生存期

#### 静态生存期

* 与程序的运行期相同


#### 动态生存期

* 开始于程序执行到声明点，结束于所处的块

### C++程序的一般组织结构

* 一个工程可以划分为多个源文件，例如：
  * 类的声明文件（.h文件: 系统类库中的头文件通常不带后缀.h,我们自己写的通常带后缀.h)
  * 类的实现文件（.cpp文件）
  * 类的使用文件(main()所在的.cpp文件)
* 利用工程来组合各个文件



### 继承与派生

* 继承与派生是同一过程从不同的角度看
  * 保持已有类的特性而构造新类的过程称为继承
  * 在已有类的基础上新增自己的特性而产生新类的过程称为派生


单继承时派生类的定义

```
class 派生类名: 继承方式 基类名 {
  成员声明;
}

例如
class Derived: public Base {
  public:
    Derived();
    ~Derived();
};
```

多继承时派生类的定义

```
语法

class 派生类名: 继承方式1 基类名1, 继承方式2 基类名2, ...
{
  成员声明;
}


注意： 每一个“继承方式”，只用于限制对紧随其后之基类的继承。

例如:
class Derived: public Base1, private Base2 {
  public:
    Derived();
    ~Derived();
};
```

不同继承方式的影响主要体现在：
* 派生类`成员`对基类成员的访问权限
* 通过派生类`对象`对基类成员的访问权限



* 共有继承(public)
  * 继承的访问控制
    * 基类的public和protected成员：访问属性在派生类中保持不变
    * 基类的private成员：不可直接访问
  * 访问权限
    * 派生类中的成员函数：可以直接访问基类中的public和protected成员，但不能直接访问基类的private成员
    * 通过派生类的对象：只能访问public成员
* 私有继承（private）
  * 继承的访问控制
    * 基类的public和protected成员: 都以private身份出现在派生类中；
    * 基类的private成员: 不可直接访问
  * 访问权限
    * 派生类中成员函数: 可以直接访问基类中的public和protected成员，但不能直接访问基类中的private成员
    * 通过派生类的对象: 不能直接访问从基类继承的任何成员
* 保护继承（protected）
  * 继承的访问控制
    * 基类的public和protected成员: 都以protected身份出现在派生类中
    * 基类的private成员: 不可直接访问
  * 访问权限
    * 派生类中的成员函数： 可以直接访问基类中的public和protected成员，但不能直接访问private成员
    * 通过派生类的对象：不能直接访问从基类继承的任何成员


类型转换

* 共有派生类对象可以被当做基类的对象使用，反之则不可
  * 派生类的对象可以隐含转换为基类对象
  * 派生类的对象可以初始化基类的引用
  * 派生类的指针可以隐含转换为基类的指针
* 通过基类对象名、指针只能使用从基类继承的成员



#### 继承基类的构造函数

可用using语句继承基类构造函数，但是只能初始化从基类继承的成员；语法形式 using B::B;

单继承时构造函数的定义语法

``` 
  派生类名::派生类名(基类所需形参， 本类成员所需的形参): 基类名(参数表), 本类成员初始化列表
  {
      // 其他初始化
  }；
```

多继承时构造函数的定义语法
```
派生类名::派生类名(参数表): 基类名1(基类1初始化参数表), ... 基类名n(基类n初始化参数表), 本类成员初始化列表 {
	// 其他初始化;
};
```
  
多继承且有对象成员时派生的构造函数定义语法
```
派生类名::派生类名(形参表): 基类名1(参数), ... 基类名n(参数), 本类成员(含对象成员) 初始化列表
{
	// 其他初始化
};


构造函数的执行顺序
1. 调用基类构造函数；顺序按照他们被继承时声明的顺序（从左向右)
2. 对初始化列表中的成员进行初始化
	1. 顺序按照他们在类中定义的顺序
	2. 对象成员初始化时自动调用其所属类的构造函数
		1. 由初始化列表提供参数
3. 执行派生类的构造函数体中的内容
```

若派生类没有声明复制构造函数

* 编译器会在需要时生成一个隐含的复制构造函数
* 先调用基类的复制构造函数
* 再为派生类新增的成员执行复制

若派生类定义复制构造函数

* 一般都要为基类的复制构造函数传递参数
* 复制构造函数只能接受一个参数，既用来初始化派生类定义的成员，也将被传递给基类的复制构造函数
* 基类的复制构造函数形参类型是基类对象的引用，实参可以是派生类对象的引用
* 例如： C::C(const C &c1): B(C1) {...}


派生类的析构函数

* 析构函数不被继承，派生类如果需要，要自行声明析构函数
* 声明方法与无继承关系时类的析构函数相同
* 不需要显式地调用基类的析构函数，系统会自动隐式调用
* 先执行派生类析构函数的函数体，再调用基类的析构函数


当派生类与基类中有相同成员时：

* 若未特别限定，则通过派生类对象使用的是派生类的同名成员
* 如果要通过派生类对象访问基类中被隐藏的同名成员，应使用基类名和作用域操作符(::)来限定


### 虚基类

需要解决的问题： 当派生类从多个基类派生，而这些基类又有公共基类，则在访问此公共基类中的成员时，将产生冗余，并有可能冗余带来不一致性

虚基类声明: 以virtual说明基类继承方式
例如： class B1: virtual public B

作用：

* 主要用来解决多继承时可能发生的对同一基类继承多次而产生的二义性问题
* 为最远的派生类提供唯一的基类成员，而不重复产生多次复制

注意：在第一级继承时就要将公共基类设计为虚基类

#### 虚基类及其派生类构造函数

* 建立对象时所指定的类称为最远派生类
* 虚基类的成员是由最远派生类的构造函数通过调用虚基类的构造函数进行初始化的
* 在整个继承结构中，直接或间接继承虚基类的所有派生类，都必须在构造函数的成员初始化表中为虚基类的构造函数列出参数。如果未列出，则表示调用该虚基类的默认构造函数
* 在建立对象时，只有最远派生类的构造函数调用虚基类的构造函数，其他类对虚基类构造函数的调用被忽略


### 重载

* 重载为类的非静态成员函数
* 重载为非成员函数


重载为类成员的运算符函数定义形式：
```
函数类型 operator 运算符(形参) {
  ...
}
参数个数 = 原操作数个数 - 1(后置++， --除外)
```

双目运算符重载规则

* 如果要重载B为类成员函数，使之能够实现表达式 opr1 B opr2,其中opr1为A类对象，则B应被重载为A类的成员函数，形参类型应该是opr2所属的类型。
* 经过重载后，表达式opr1 B opr2相当于opr1.operator B(opr2)

前置单目运算符重载规则

* 如果要重载U为类成员函数，使之能够实现表达式U oprd，其中oprd为A类对象，则U应该被重载为A类的成员函数，无形参。
* 经重载后，表达式U oprd相当于oprd.operator U()

后置单目运算符 ++和--重载规则

* 如果要重载++或者--为类成员函数，使之能够实现表达式oprd++或oprd--， 其中oprd为A类对象，则++或--应被重载为A类的成员函数，且具有一个int类型形参。
* 经重载后，表达式 oprd++相当于 oprd.operator ++(0)


