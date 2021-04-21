#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	static int a[10] = {0, 1, 2, 3, 4, 5};
	static int b[] = {0, 1, 2, 3, 4, 5};
	
	
	static int c[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	static int d[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9,10,11,12},
	};
	int e[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int f[][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9,10,11,12},
	};
	return 0;
}