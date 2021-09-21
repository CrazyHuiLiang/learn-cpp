#include <iostream>
#include <string>
using namespace std;

class MyException {
private:
	string message;
public:
	MyException(const string &message): message(message) {}
	~MyException(){}
	const string &getMessage() const {return message;}
};

class Demo {
public:
	Demo() { cout << "Constructor of Demo" << endl; }
	~Demo() { cout << "Destructor of Demo" << endl; }
};

void func() throw(MyException) {
	Demo d;
	cout << "Throw My Exception in func()" << endl;
	throw MyException("exception thrown by func()");
}

int main(int argc, char *argv[]) {
	cout << "In main function" << endl;
	try {
		func();
	} catch (MyException &e) {
		cout << "Caught an exception: " << e.getMessage() << endl;
	}
	cout << "Resume the exception of main()" << endl;
	return 0;
}
