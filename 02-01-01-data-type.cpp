// 数据类型的学习
#include <iostream>

using namespace std;

int main() {
    int i = 1;
    cout << i << endl;

    short i2 = 2;
    cout << i2 << endl;

    long i3 = 3;
    cout << i3 << endl;

    long long i4 = 4;
    cout << i4 << endl;

    unsigned i5 = 5;
    cout << i5 << endl;

    unsigned long i6;
    cout << "Please input a number:";
    cin >> i6;
    cout << i6 << endl;

    const unsigned long long i7(7);
    cout << i7 << endl;

    // i7 = 8;

    const double pi(3.14159);
    cout << pi << endl;


    char a = 'a';
    cout << a << endl;


    const char b[] = "abc";
    cout << &b << endl;


    return 0;
}




