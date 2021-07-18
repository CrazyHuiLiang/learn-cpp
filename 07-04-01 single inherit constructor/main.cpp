// gcc -v -lstdc++ -std=c++11 main.cpp
#include <iostream>
using namespace std;


class B {
public:
	B();
	B(int i);
	void print() const;
	~B();
private:
	int b;
};

B::B() {
	b = 0;
	cout << "B's default constructor called." << endl;
};

B::B(int i): b(i) {
	b = i;
	cout << "B's constructor called." << endl;
};

void B::print() const {
	cout << "B's print:" << b << endl;
};

B::~B() {
	cout << "B's destructor called." << endl;
}


class C: public B {
public:
	C();
	C(int i, int j);
	~C();
	void print() const;
private:
	int c;
};

C::C() {
	c = 0;
	cout << "C's default constructor called." << endl;
};

C::C(int i, int j): B(i), c(j) {
	cout << "C's constructor called" << endl;
};
void C::print() const {
	B::print();
};

C::~C () {
	cout << "C's destructor called" << endl;
}


int main(int argc, char *argv[]) {
	C obj(5, 6);
	obj.print();
	return 0;
}
