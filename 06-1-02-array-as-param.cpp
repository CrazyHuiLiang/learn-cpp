#include <iostream>

using namespace std;

// 累加一行的值，将一行的和放在行首
void rowSum(int a[][4], int nRow) {
	for (int i = 0; i<nRow; i++) {
		for (int j = 1; j<4; j++) {
			a[i][0] += a[i][j];
		}
	}
}





int main(int argc, char *argv[]) {
	int table[3][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 5},
		{3, 4, 5, 6}
	};
	rowSum(table, 3);
	for (int i = 0; i<3; i++) {
		cout << table[i][0] << endl;
	}
	return 0;
}
