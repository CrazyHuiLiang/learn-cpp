#include <iostream>

using namespace std;


class Base1 {
public:
	int var;
	void fun() {
		cout << "Member of Base1" << endl;
	}
};

class Base2 {
public:
	int var;
	void fun() {
		cout << "Member of Base2" << endl;
	}
};

class Derived: public Base1, public Base2 { // 定义派生类Derived
public:
	int var;
	void fun() {
		cout << "Member of Derived" << endl;
	}
};



int main(int argc, char *argv[]) {
	Derived d;
	Derived *p = &d;
	
	d.var = 1;
	d.fun();

	// 引用方式调用基类
	d.Base1::var = 1;
	d.Base1::fun();
	
	
	// 派生类指针
	p -> Base1::var = 1;
	p -> Base1::fun();
	return 0;
}