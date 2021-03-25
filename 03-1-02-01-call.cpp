// 函数的调用
#include <iostream>
using namespace std;

// 计算x的n次方
double power(double x, int n) {
    double value = 1.0;
    while(n--) {
        value *= x;
    }
    return value;
}

int main() {
    cout << power(2, 2) << endl;
    cout << power(4, 2) << endl;
    return 0;
}
