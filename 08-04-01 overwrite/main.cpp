/* 重载Complex的加减法和 "<<" 运算符为非成员函数
* 将+， -（双目）重载为非成员函数，并将其声明为复数类的友元，两个操作数都是复数类的常引用
* 将 << （双目）重载为非成员函数，并将其声明为复数类的友元，它的左操作数是std::ostream引用，右操作数为复数类的常引用，返回std::ostream引用，用以支持下面形式的输出：
cout << a << b;
该输出调用的是：
operator << (oerator << (cout, a), b);
*/

#include <iostream>

using namespace std;


class Complex {
    private:
        double real; // 复数实部
        double imag; // 复数虚部

    public:
        Complex(double r=0.0, double i=0.0): real(r), imag(i){}
        friend Complex operator +(const Complex &c1, const Complex &c2);
        friend Complex operator -(const Complex &c1, const Complex &c2);
        friend ostream& operator << (ostream &out, const Complex &c);
};

Complex operator +(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator -(const Complex &c1, const Complex &c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

ostream& operator <<(ostream& out, const Complex& c) {
    cout << "operator <<" << endl;
    out << "(" << c.real << "," << c.imag << ")";
    return out;
}

int main() {
    Complex c1(5, 4), c2(2, 10), c3;
    cout << "c1=" << c1 << endl;
    cout << "c2=" << c2 << endl;

    c3 = c1 - c2; // 使用重载运算符完成复数减法
    cout << "c3 = c1 - c2" << c3 << endl;

    c3 = c1 + c2; // 使用重载运算符完成复数加法
    cout << "c3 = c1 + c2 = " << c3 << endl;
    return 0;
}
