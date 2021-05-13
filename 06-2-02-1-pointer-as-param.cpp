#include <iostream>

using namespace std;
void splitFloat(float x, int *intPart, float *fracPart) {
	*intPart = static_cast<int> (x); // 取x的整数部分
	*fracPart = x - *intPart; // 取x的小数部分
}


int main(int argc, char *argv[]) {
	int intPart;
	float fracPart;
	splitFloat(98.765, &intPart, &fracPart);
	cout << intPart << endl;
	cout << fracPart << endl;
	return 0;
}