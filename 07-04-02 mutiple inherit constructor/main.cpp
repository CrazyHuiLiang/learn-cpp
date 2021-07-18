#include <iostream>

using namespace std;


class Base1 {
public:
	Base1(int i) {
		cout << "Constructing Base1:" << i << endl;
	}
};

class Base2 {
public:
	Base2(int j) {
		cout << "Constructing Base2:"<< j << endl;
	}
};

class Base3 {
public:
	Base3() {
		cout << "Constructing Base3" << endl;
	}
};

class Derived: public Base2, public Base1, public Base3 { // 首先按照类定义上声明的顺序执行
public:
	Derived(int a, int b, int c, int d): Base1(a), member2(d), member1(c), Base2(b) { // 这里只是声明各个成员初始化的方式，这里的顺序无关紧要
		
	}
private: // 其次是这里的顺序
	Base1 member1;
	Base2 member2;
	Base3 member3;
};



int main(int argc, char *argv[]) {
	Derived obj(1, 2, 3, 4);
	return 0;
}
