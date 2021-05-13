/*
函数指针的定义

形式：
存储类型 数据类型 (*函数指针名)();


含义：函数指针指向的是程序代码存储区


典型用途 - 实现函数回调
*/
#include <iostream>
using namespace std;


// 计算
int compute(int a, int b, int(*func)(int, int)) {
	return func(a, b);
}

// 求最大值
int max(int a, int b) {
	return a > b ? a: b;
}

// 求最小值
int min(int a, int b) {
	return a < b ? a: b;
}

// 求和
int sum(int a, int b) {
	return a + b;
}


int main(int argc, char *argv[]) {
	
	int a = 10;
	int b = 5;
	
	cout << "Max of " << a << " and " << b << " is " << compute(a, b, &max) << endl;
	cout << "Min of " << a << " and " << b << " is " << compute(a, b, &min) << endl;
	cout << "Sum of " << a << " and " << b << " is " << compute(a, b, &sum) << endl;
	
	return 0;
}



