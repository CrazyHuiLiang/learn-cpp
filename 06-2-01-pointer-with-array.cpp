#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int a[10], *pa;
	
	// 等效
	pa = &a[0];
	pa = a;
	
	cout << (*pa == a[0]) << endl;
	cout << (*(pa + 1) == a[1]) << endl;
	return 0;
	
}