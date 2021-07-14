#include <iostream>
using namespace std;

class Base1 {
public:
	void display() const {
		cout << "Base1::display()" << endl;
	}
};

class Base2: public Base1 { // 共有派生类
public:
	void display() const {
		cout << "Base2::display()" << endl;
	}
};

class Derived: public Base2 { // 共有派生类
public:
	void display() const {
		cout << "Derived::display()" << endl;
	}
};



// 通用的显示函数
void fun(Base1 *ptr) {
	ptr -> display();
}



int main(int argc, char *argv[]) {
	Base1 base1;
	Base2 base2;
	Derived derived;
	
	fun(&base1);
	fun(&base2);
	fun(&derived);
	// !不要重新定义继承而来的非虚函数，因为其多态形式的调用都会使用基类的函数，不符合预期
	return 0;
}