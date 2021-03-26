#include <iostream>
using namespace std;

// 重载： 形参个数和类型不同
int abs(int x) {
    return x < 0? -x: x;
}
double abs(double x) {
    return x < 0? -x: x;
}

int main() {
    cout << abs(-100) << endl;
    return 0;
}

