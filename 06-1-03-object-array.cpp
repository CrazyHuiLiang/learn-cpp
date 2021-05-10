#include <iostream>
#include "06-1-03-object-array.h"
using namespace std;

Point::Point(): x(0), y(0) {
	cout << "Default Constructor called." << endl;
}
Point::Point(int x, int y): x(x), y(y) {
	cout << "Constructor called." << endl;
}

Point::~Point() {
	cout << "Destructor called." << endl;
}
void Point::move(int newX, int newY) {
	cout << "Moving the point to (" << newX << "," << newY << ")" << endl;
	y = newX;
	y = newY;
}

int main(int argc, char *argv[]) {
	cout << "Entering main..." << endl;
	// 数组a
	Point a[2];
	for (int i = 0; i<2; i++) {
		a[i].move(i+10, i+20);
	}
	cout << "Exiting main..." << endl;
	
	// 定义并初始化数组ps
	Point ps[2] = {Point(1, 1), Point(100, 100)};
	
	return 0;
}
