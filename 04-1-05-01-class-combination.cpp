#include <iostream>

using namespace std;

class Point {
    public:
        Point(int xx, int yy);
        Point(Point &pp): Point(pp.x, pp.y){
            cout << "point delegate" << endl;
        };
        void show();
    private:
        int x, y;
};

Point::Point(int xx, int yy): x(xx), y(yy) {
    cout << "Point constructor" << endl;
}

void Point::show() {
    cout << x << ',' << y;
}


class Line {
    public:
        Line(Point &pp1, Point &pp2);
        void show();
    private:
        Point &p1, &p2;
};

Line::Line(Point &pp1, Point &pp2): p1(pp1), p2(pp2) {
    cout << "Line constructor" << endl;
}
void Line::show() {
    cout << "Line from ";
    p1.show();
    cout << " to ";
    p2.show();
    cout << endl;
}



int main() {
    Point p1(1, 1), p2(100, 100);
    Line l1(p1, p2);
    l1.show();

    return 0;
}

