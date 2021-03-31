#include <iostream>
using namespace std;

class Clock {
    public:
        Clock(int newH, int newM, int newS); // 构造函数，不需要定义返回类型
        Clock(); // 默认构造函数（在有其他构造函数时，系统不会自动生成默认构造函数，建议手动添加默认的构造函数）
        void setTime(int newH, int newM, int newS);
        void showTime();
    private:
        int hour, minute, second;
};


// 构造函数的实现                            初始化列表(简单的初始化推荐这种方式)
Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {

}
// 默认构造函数
Clock::Clock(): hour(0), minute(0), second(0) {

}
void Clock::showTime() {
    cout << hour << ":"  << minute << ":" << second << endl;
}


int main() {
    Clock c(0, 0, 0);
    c.showTime();

    Clock c2;
    c2.showTime();
    return 0;
}

