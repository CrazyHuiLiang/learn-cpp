#include <iostream>
using namespace std;


class IntNum {
public:
	IntNum(int x = 0): xptr(new int(x)) { // 构造函数
		cout << "Calling constructor..." << endl;
	}
	IntNum(const IntNum &n): xptr(new int(*n.xptr)) { // 复制构造函数
		cout << "Calling copy constructor..." << endl;
	}
	
	
	IntNum(IntNum &&n): xptr(n.xptr) { // 移动构造函数 &&是右值引用-即将消亡的值
		n.xptr = nullptr;
		cout << "Calling move constructor..." << endl;
	}
	
	int getInt() {
		cout << "get int" << endl;
		return *xptr;
	}
	
	~IntNum() {
		delete xptr;
		cout << "Destructing..." << endl;
	}
private:
	int *xptr;
};

IntNum getNum() {
	IntNum a;
	return a;
}


int main(int argc, char *argv[]) {

	cout << getNum().getInt() << endl;
	return 0;
}