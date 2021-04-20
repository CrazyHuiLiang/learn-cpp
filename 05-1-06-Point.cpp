#include "05-1-06-Point.h" // 会在当前目录下查找，其次是系统约定的目录下找
#include <iostream> // 会在安装的目录下查找
using namespace std;


int Point::count = 0; // 使用类名初始化静态数据成员
Point::Point(const Point &p): x(p.x), y(p.y) {
    count++;
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}


