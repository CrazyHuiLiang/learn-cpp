#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



// 结构体（在c++中也是一种特殊的类）
// 结构体中可以定义数据成员，也可以定义函数成员
struct Person {
    string name; // 共有成员
    char sex;

//     protected: // 好像只能定义public的属性，有protected、private的属性的话，在初始化时会报错。
//         int age;
    
    // private:
    //     string idCard;
};




int main() {
    Person p1 = {"张3", '1'};
//     p1.name = "张5";
//     p1.sex = '0';
    cout << p1.name << endl;
    cout << p1.sex << endl;

    return 0;
}

