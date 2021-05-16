#include <iostream>

using namespace std;


class Point {
public:
	Point(): x(0), y(0) {
		cout << "Default Constructor called." << endl;
	}
	Point(int x, int y): x(x), y(y) {
		cout << "Constructor called." << endl;
	}
	~Point() {
		cout << "Destructor called." << endl; 
	}
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
	
private:
	int x, y;
};


int main(int argc, char *argv[]) {
	
	/*
	动态申请内存操作符 new
	new 类型名T (初始化参数列表)
	
	功能：
		在程序执行期间，申请用于存放T类型对象的内存空间
	
	
	释放内存操作符
	delete 指针p
	功能：
		释放指针p所指向的内存
		p必须是new操作的返回值
	*/
	cout << "Step one:" << endl;
	Point *ptr1 = new Point; // 调用默认构造函数
	delete ptr1; // 删除对象，自动调用析构函数
	cout << "pointer:" << ptr1 << endl;
	
	cout << "step two:" << endl;
	ptr1 = new Point(1, 2);
	delete ptr1;
	cout << "pointer:" << ptr1 << endl;
	return 0;
}