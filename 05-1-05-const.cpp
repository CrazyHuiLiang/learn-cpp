#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

class Point {
public:
    Point(int x=0, int y=0): x(x), y(y){}
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void print();
    void print() const; // 常 函数（const也是区分重载的一个标志）会承诺绝不修改成员的值
    friend float dist(const Point &p1, const Point &p2); // 常引用
private:
    int x, y;
    // const int a;
    // static const int b; // 静态常数据成员
};

void Point::print() {
    cout << x << "," << y << endl;
}

void Point::print() const {
    cout << x << "," << y << endl;
}



int main() {
    // 常对象（a不可改变）
    Point const a(3, 4);

    const Point b(20, 52);
    b.print(); // 调用void print() const
    
    return 0;
}

