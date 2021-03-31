#include <iostream>
using namespace std;

class Clock {
    public:
        Clock(int newH, int newM, int newS);
        Clock():Clock(0, 0, 0) {} // 委托构造函数

        void setTime(int newH, int newM, int newS);
        void showTime();
    private:
        int hour, minute, second;
};


Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {

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

