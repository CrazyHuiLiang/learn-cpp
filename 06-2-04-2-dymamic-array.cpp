#include <iostream>

using namespace std;
/*
分配和释放动态数组

分配： new 类型名T[数组长度]
	数组长度可以是任何整数类型表达式，在运行时计算

释放： delete[] 数组名p
	释放指针p所指向的数组
	delete后面的[]是必须的，没有方括号仅释放数组首地址
	p必须是用new分配得到的数组首地址
	
	
	
动态创建多维数组
	
new 类型名T[第1维长度][第2维长度]...;
	如果内存申请成功，new 运算符返回一个指向新分配内存首地址的指针
*/

int main(int argc, char *argv[]) {
	
	
	
	// Demo： 多维数组
	int (*cp)[9][8] = new int[7][9][8];
	for (int i=0; i<7; i++) {
		for (int j=0; j<9; j++) {
			for (int k=0; k<8; k++) {
				*(*(*(cp + i) + j) + k) = (i * 100 + j*10 + k);
			}
		}
	}
	
	for (int i=0; i<7; i++) {
		for (int j=0; j<9; j++) {
			for (int k=0; k<8; k++) {
				cout << cp[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	delete[] cp;
	return 0;
}
