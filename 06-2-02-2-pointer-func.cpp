#include <iostream>
using namespace std;


/*
指针函数的定义形式

存储类型 数据类型 *函数名() {

}

不要将非静态局部地址用做函数的返回值： 因为其值已经不存在
*/



// 错误的例子:将非静态局部地址用做函数的返回值
int *fun1() {
	int local = 10;
	return &local; // 函数结束时，变量local被释放
}
void callFun1() {
	int *ptr = fun1();
	cout << *ptr;
}










// 指针a指向主函数中定义的数组
int *search(int *a, int num) {
	for (int i=0; i<num; i++) {
		if (a[i] == 0) {
			return &a[i]; // 返回的地址指向元素是在主函数中定义的
		}
	}
	return 0;
}

// 使用new动态分配的内存
int *newIntVar() {
	int* p=new int();
	return p;// 返回的地址指向的是动态分配的空间,函数运行结束时，p中的地址仍有效
}


int main(int argc, char *argv[]) {
	
	
	int array[10]; // 主函数中定义的数组
	for (int i=0; i<10; i++) {
		cin >> array[i];
	}
	int *zeroptr = search(array, 10); // 将主函数中数组的首地址传给子函数
	cout << "result" << *zeroptr << endl;
	
	
	
	
	
	int* intptr = newIntVar();
	*intptr = 5; // 访问的是合法有效的地址
	delete intptr; // 如果忘记在这里释放，会造成内存泄漏
	cout << "new int var:" << *intptr;
	return 0;
}
