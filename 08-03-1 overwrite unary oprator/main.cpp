/* 重载前置++和后置++ 为时钟类成员函数
前置单目运算符，重载函数没有形参
后置++运算符，重载函数需要有一个int形参
操作数是时钟类的对象
实现时间增加1秒钟
*/

#pragma once
#include <iostream>
using namespace std;


class Clock
{
private:
    int hour, minute, second;
public:
    Clock(int hour=0, int minute=0, int second=0);
    void showTime() const;
    // 前置单目运算符重载
    Clock& operator ++();
    // 后置单目运算符重载
    Clock& operator ++(int);
    ~Clock();
};

Clock::Clock(int hour, int minute, int second) {
    cout << "constructor: " << this << endl;

    if (0 <= hour && hour < 24 && 0<=minute && minute < 60 && 0<=second && second < 60) {
        this-> hour = hour;
        this-> minute = minute;
        this-> second = second;
    } else {
        cout << "Time error!" << endl;
    }
}

void Clock::showTime() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

Clock& Clock::operator ++() {
    second++;
    if(60 <= second) {
        second -= 60;
         minute++;
         if (minute >= 60)
         {
             minute -= 60;
             hour = (hour + 1) % 24;
         }
         
    }
    return *this;
}

Clock& Clock::operator ++(int) {
    Clock old = *this;
    ++(*this); // 调用前置"++"运算符
    return old;
}

Clock::~Clock()
{
    // cout << "desctructor: " << *this;
}


int main() {
    
    Clock myClock(23, 59, 59);
    cout << "First time output:";
    myClock.showTime();

    cout << "Show myClock++:";
    (myClock++).showTime();

    cout << "Show ++myClock:";
    (++myClock).showTime();


    return 0;
}
