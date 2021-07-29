/*
复数类加减法运算重载为成员函数

要求： 将+，-运算重载为复数类的成员函数
规则：实部和虚部分分别相加减
操作数：两个操作数都是复数类的对象
*/
#pragma once

#include <iostream>

using namespace std;

class Complex {
public:
	Complex(double r=0.0, double i=0.0): real(r), imag(i) {}
	// 运算符 +重载成员函数
	Complex operator +(const Complex &c2) const;
	// 运算符 -重载成员函数
	Complex operator -(const Complex& c2) const;
	void display() const; // 输出复数
private:
	double real; // 复数实部
	double imag; // 复数虚部
};





