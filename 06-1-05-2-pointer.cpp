#include <iostream>

/*
	cpp中可以通过以下方式访问数据
	* 变量名
	* 指针
	
	指针变量的赋值运算
	语法形式：  指针名 = 地址
	注意： “地址”中存放的数据类型与指针类型必须相符；向指针变量赋的值必须是地址常量或变量，不能是普通整数。
	
	例如：
		* 通过地址运算 “&” 求得已定义的变量和对象的起始地址，动态内存分配成功时返回的地址
		* 整数0可以赋值给指针，表示空指针; nullptr
		* 允许定义或声明指向void类型的指针。该指针可以被赋予任何类型对象的地址。 void *general;
*/

using namespace std;
int main(int argc, char *argv[]) {
	
	cout << "Demo1" << endl;

	int i; // 定义int型数i
	int *ptr = nullptr; // 定义空指针
	ptr = &i; // ptr 指向 i 的地址
	i = 10;
	
	cout << "i=" << i << endl; // 输出i的值
	cout << "*ptr=" << *ptr << endl; // 输出ptr指向的值
	
	
	cout << "Demo2" << endl;
	void *pv;
	pv = &i;
	int *pint = static_cast<int *> (pv); // void指针装换为int指针
	cout << "*pint=" << *pint << endl;
	
	
	// 指向常量的指针： const指针
	// 不能通过指向常量的指针改变所指对象的值，但指针本身可以改变，可以指向另外的对象
	int a;
	const int *p1 = &a; // p1是指向常量的指针
	int b;
	p1 = &b; // 正确，p1本身的值可以改变
//	*p1 = 1; // 编译时出错，不能通过p1改变所指的对象
	
	
	// 指针类型的常量
	// 若声明指针常量，则指针本身的值不能被改变
	int *const p2 = &a;
//	p2 = &b;// 编译出错，p2是指针常量，值不能改变
	return 0;
}

