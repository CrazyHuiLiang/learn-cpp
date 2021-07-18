#include <iostream>

using namespace std;




class Base0 {
public:
	int var0;
	Base0(int var): var0(var) {}
	void fun0() {
		cout << "Member of Base0" << endl;
	}
};


class Base1: virtual public Base0 {
public:
	int var1;
	Base1(int var): Base0(var) {}
};

class Base2: virtual public Base0 {
public:
	int var2;
	Base2(int var): Base0(var) {}
};

class Derived: public Base1, public Base2 { // 定义派生类Derived
public:
	int var;
	Derived(int var): Base0(var), Base1(var), Base2(var) {}
	void fun() {
		cout << "Member of Derived" << endl;
	}
};



int main(int argc, char *argv[]) {
	Derived d(1);
	d.var0 = 2; // 直接访问虚基类的数据成员
	d.fun0(); // 直接访问虚基类的函数成员
	return 0;
}