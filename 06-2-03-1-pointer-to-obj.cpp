#include <iostream>

using namespace std;


/*
	对象指针定义形式
	类名 *对象指针名;
	
	Point a(5, 10);
	Point *ptr = &a;
	
	
	访问：
	对象指针名 -> 成员名
	ptr -> getx();
	(*ptr).getx();

*/

class Point {
public:
	Point(int x=0, int y=0):x(x),y(y) {}
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
private:
	int x, y;
};


int main(int argc, char *argv[]) {
	Point a(4, 5);
	Point *p1 = &a; // 定义对象指针，用a的地址初始化
	cout << p1 -> getX() << endl; // 用指针访问对象成员
	cout << a.getX() << endl; // 用对象名访问对象成员
	
	
	
	/*
		this指针
	隐含于类的每一个非静态成员函数中
	指出成员函数所操作的对象
	
	*/
	return 0;
}

