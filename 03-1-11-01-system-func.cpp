#include <iostream>
// 使用系统中已提供的函数可以提高开发效率
#include <cmath>

using namespace std;

const double PI = 3.14159265358979;

int main() {
    double angle;
    cout << "Please enter an angle:";
    cin >> angle; // 输入角度值
    double radian = angle * PI / 180; // 转为弧度
    cout << sin(radian) << endl;
    cout << cos(radian) << endl;
    cout << tan(radian) << endl;
    return 0;
}
