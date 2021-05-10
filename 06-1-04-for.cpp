#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int array[3] = {1, 2, 3};
	
	cout << "普通for循环" << endl;
	for (int *p = array; p < array+sizeof(array)/sizeof(int); ++p) {
		*p += 2;
		cout << *p << endl;
	}
	
	cout << "基于范围的for循环" << endl;
	for (int &e : array) {
		e += 2;
		cout << e << endl;
	}
	
	return 0;
}
