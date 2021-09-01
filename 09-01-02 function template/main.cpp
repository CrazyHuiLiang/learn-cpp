#include <iostream>

using namespace std;

template <class T>
void outputArray(const T *array, int count) {
	for (int i=0; i< count; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
}


int main(int argc, char *argv[]) {
	const int aCount = 8;
	const int bCount = 8;
	const int cCount = 20;
	
	int a[aCount] = {1, 2, 3, 4, 5, 6, 7, 8};
	double b[bCount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};
	char c[cCount] = "Welcome";
	
	cout << "a array contains:" << endl;
	outputArray(a, aCount);	
	cout << "b array contains:" << endl;
	outputArray(b, bCount);	
	cout << "c array contains:" << endl;
	outputArray(c, cCount);
	
	return 0;
}

