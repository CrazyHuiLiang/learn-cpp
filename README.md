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







