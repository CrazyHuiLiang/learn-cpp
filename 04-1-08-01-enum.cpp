#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// 传统c中的枚举，实际是int的子集
// 枚举类 - 强类型的枚举

enum class Type {
    General,
    Light,
    Medium,
    Heavy,
};


// 指定枚举类型
enum class Type2:char {
    General,
    Light,
    Medium,
    Heavy,
};

// 指定枚举常量
enum class Category {
    General = 1,
    Pistol,
    MachineGun,
    Cannon,
};


int main() {
    Type t1 = Type::General;
    cout << (t1 == Type::Light) <<endl;
    return 0;
}

