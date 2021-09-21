#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char *argv[]) {
	double values[] = { 1.23, 35.36, 653.7, 4358.24 };
	for (int i = 0; i < 4; i++) {
		cout.width(10);
		cout << values[i] << endl;
	}
	
	// 使用控制符 setw
	string names[] = {"Zoot", "Jimmy", "AI", "Stan"};
	for (int i = 0; i<4; i++) {
		cout << setw(6) << names[i] << setw(10) << values[i] << endl;
	}
	
	// setiosflags
	for (int i = 0; i<4; i++) {
		cout << setiosflags(ios_base::left) << setw(6) << names[i] << resetiosflags(ios_base::left) << setw(10) << values[i] << endl;
	}
	
	// setprecision
	cout << "控制精度" << endl;
	for (int i = 0; i<4; i++) {
		cout << setiosflags(ios_base::left) << setw(6) << names[i] << resetiosflags(ios_base::left) << setw(10) 
		// 科学计数法
		<< setprecision(1) << values[i] << endl;
	}
	
	
	cout << "控制精度2" << endl;
	cout << setiosflags(ios_base::fixed);
	for (int i = 0; i<4; i++) {
		cout << setiosflags(ios_base::left) << setw(6) << names[i] << resetiosflags(ios_base::left) << setw(10)
		// setiosflags(ios_base::fixed) 使得 setprecision(1)  的含义变为小数点后1位
		<< setprecision(1) << values[i] << endl;
	}
	
	
	cout << "控制精度3" << endl;
	cout << setiosflags(ios_base::scientific);
	for (int i = 0; i<4; i++) {
		cout << setiosflags(ios_base::left) << setw(6) << names[i] << resetiosflags(ios_base::left) << setw(10)
		// setiosflags(ios_base::scientific) 使得 setprecision(1)  的含义变为小数点后1位
		<< setprecision(1) << values[i] << endl;
	}
	
	return 0;
}
