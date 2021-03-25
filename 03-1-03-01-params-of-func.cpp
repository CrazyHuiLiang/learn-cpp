// 函数的传参
#include <iostream>
using namespace std;

/* 可变长度的形参表
    * A：如果所有实参类型相通，可以传递名为 initializer_list 的标准库类型
    * B: 如果实参的类型不同，我们可以编写可变参数的模板
*/


/*
内联函数
  声明时使用关键字 inline。
  编译时在调用处用函数体进行替换，节省了参数传递、控制转移等开销。
  注意：
    内联函数体内不能有循环语句和switch语句；
    内联函数的定义必须出现在内联函数第一次被调用之前；
    对内联函数不能进行异常接口声明。
*/
inline int callPlus(int a, int b) {
    return a + b;
}
/*
    constexpr修饰的函数在其所有参数都是constexpr时，一定返回constexpr
    函数体内必须有且仅有一条return语句
*/
constexpr int getSize() {
    return 20;
}
constexpr int foo = getSize();


int main() {
    int i = 5;
    // 引用类型变量
    int &ri = i;

    // 修改引用的值后
    ri = 10;

    // 变量i的值会变化
    cout << i << endl;


    // 调用plus函数
    i = callPlus(1, 1);
    cout << i << endl;
    return 0;
}


