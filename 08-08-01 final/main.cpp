#include <iostream>

using namespace std;


struct Base1 final {};

//struct Derived1:public Base1 {}; // 会报错因为Base是final的



struct Base2 {
	virtual void f() final;
};

class Derived2:public Base2 {
public:
//	void f(); // f为final 不允许覆盖
};


int main(int argc, char *argv[]) {
	
	return 0;
}

