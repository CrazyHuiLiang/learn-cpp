// 系统库中的函数的调用
#include <iostream>

using namespace std;

// srand 伪随机数种子（随机数的起始值）
// rand 伪随机数


int main(int argc, char *argv[]) {
	for(int i = 0; i< 100; i++) {
		cout << rand()%6 << endl;
	}
	return 0;
}


