#include <iostream>
using namespace std;

// 类内声明函数原型
class Person
{
private: // 私有成员类外不可访问
    int age;
protected: // 保护类成员不可继承

public: // 类外可以访问
    int pubAge;
    Person(int newAge);
    int getAge();
    ~Person();
};

// 类外实现函数
Person::Person(int newAge = 0)
{
    age = newAge;
    pubAge = newAge;
}
int Person::getAge() {
    return age;
}
Person::~Person()
{
    age = 0;
}



int main () {
    Person p1(18);
    cout << p1.pubAge << endl;
    cout << p1.getAge() << endl;
}
