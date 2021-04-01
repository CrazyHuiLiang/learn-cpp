#include <iostream>
using namespace std;

class Point {
    public: 
        Point(int xx, int yy);
        ~Point(); // 析构函数
    private:
        int x, y;
};

Point::Point(int xx, int yy): x(xx), y(yy) {
    cout << "Point constructor" << endl;
}

Point::~Point() {
    cout << "Point destructor" << endl;
}

int main() {
    Point p(1, 1);
    return 0;
}
