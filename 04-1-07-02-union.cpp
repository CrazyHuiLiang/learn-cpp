#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



// 联合体
// 成员公用存储空间，不能同时存在, 同一时间只能使用一种成员
union Mark {
    char grade; // 登记值的成绩
    bool pass; // 只记是否通过课程的成绩
    int percent; // 百分制的成绩

    protected:
    
    private:
};

class ExamInfo
{
private:
    string name; // 课程名称
    enum { GRADE, PASS, PERCENTAGE } mode; // 计分方式
    union {
        char grade; // 登记值的成绩
        bool pass; // 只记是否通过课程的成绩
        int percent; // 百分制的成绩
    };
public:
    ExamInfo(/* args */);
    ~ExamInfo();
};

ExamInfo::ExamInfo(/* args */)
{
}

ExamInfo::~ExamInfo()
{
}



int main() {

    // 无名联合体
    union {
        int i;
        float f;
    };

    i = 5;
    cout << i << endl;
    f = 10;
    cout << i << endl;
    cout << f << endl;

    return 0;
}

