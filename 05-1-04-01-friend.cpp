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
    friend float dist(Point &a, Point &b);
private:
    int x, y;
};

// dist没有作为Point的类成员，而是在外部定义为全局的函数； Point类中的dist声明为友元（friend），dist内部可以使用private的x，y
// 友元是单向的（B是A的友元，不代表A是B的友元）
float dist(Point &a, Point &b) {
    double x = a.x - b.x;
    double y = a.y - b.y;
    return static_cast<float>(sqrt(x*x + y*y));
}


int main() {
    Point p1(1, 1), p2(4, 5);
    cout << "The distance is:" << dist(p1, p2) << endl;
    
    return 0;
}

