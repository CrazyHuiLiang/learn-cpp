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

class ExamInfo {
    private:
        string name; // 课程名称
        enum { GRADE, PASS, PERCENTAGE } mode; // 计分方式
        union {
            char grade; // 登记值的成绩
            bool pass; // 只记是否通过课程的成绩
            int percent; // 百分制的成绩
        };
    public:
        ExamInfo(string name, char grade): name(name), mode(GRADE), grade(grade){};
        ExamInfo(string name, bool pass): name(name), mode(PASS), pass(pass){};
        ExamInfo(string name, int percent): name(name), mode(PERCENTAGE), percent(percent){};
        
        void show() {
            cout << "show: " << name << '-';
            if (mode == GRADE) {
                cout << grade;
            } else if (mode == PASS) {
                cout << pass;
            } else {
                cout << percent;
            }
            cout << endl;
        };
        
        ~ExamInfo(){};
};



int main() {


    // 无名联合体
    cout << "无名联合体:" << endl;
    union {
        int i;
        float f;
    };

    i = 5;
    cout << i << endl;
    f = 10;
    cout << i << endl;
    cout << f << endl;

    // ExamInfo
    cout << "ExamInfo" << endl;
    ExamInfo examInfo("张三", 100);
    examInfo.show();
    
    ExamInfo examInfo2("李四", true);
    examInfo2.show();
    
    ExamInfo examInfo3("王五", 'B');
    examInfo3.show();
    return 0;
}

