#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Point {
    private:
        int x;
        int y;
        static int count; // 在构造函数中对count累加，所有对象共同维护同一个count
    public:
        Point(int x, int y): x(x), y(y) {
            count++;
        };
        int getX() {return x;};
        int getY() {return y;};
        void showCount() {
            cout << "Object count = " << count << endl;
        }
        static void staticShowCount() {
            cout << endl << "static count = " << count << endl;
        }
        ~ Point() {
            count--;
        }
};
int Point::count = 0; // 静态数据成员定义和初始化，使用类名限定


int main() {
    Point::staticShowCount();
    Point a(4, 5);
    cout << "Point A:" << a.getX() << ',' << a.getY();
    a.showCount(); 
    a.staticShowCount();

    Point b(10, 10);
    cout << "Point B:" << b.getX() << ',' << b.getY();
    b.showCount();
    a.staticShowCount();

    Point::staticShowCount();
    return 0;
}

