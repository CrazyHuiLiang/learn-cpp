#include <iostream>
using namespace std;

class Clock {
    public:
        Clock(int newH, int newM, int newS);
        Clock(): Clock(1, 1, 1){};
        Clock(const Clock &newClock); // 复制构造函数是一种特殊的构造函数，其形参为本类的对象引用。作用是用一个已存在的对象去初始化同类型的新对象。
        // Clock(const Clock &newClock) = delete; // 指示编译器不生成默认的构造函数

        void setTime(int newH, int newM, int newS);
        void showTime();
    private:
        int hour, minute, second;
};


Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {

}
Clock::Clock(const Clock &newClock): hour(newClock.hour), minute(newClock.minute), second(newClock.second) {
    cout << "copy constructor called" << endl;
}
void Clock::showTime() {
    cout << hour << ":"  << minute << ":" << second << endl;
}

// 形参为Clock类对象
void fun1(Clock c) {
    cout << "fun1： ";
    c.showTime();
}

// 返回值为Clock类对象的函数
Clock fun2() {
    Clock a;
    return a;
}


int main() {
    Clock c(10, 10, 10);
    c.showTime();

    Clock c2(c); // 复制构造函数被调用情况A
    c2.showTime();

    fun1(c2); // 情况二： 对象c2作为fun1的实参

    c2 = fun2(); // 情况三： 函数的返回值是类对象
    c2.showTime();
    return 0;
}

