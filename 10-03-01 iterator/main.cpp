#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

// 求平方的函数
double square(double x) {
	return x * x;
}

int main(int argc, char *argv[]) {
	transform(istream_iterator<double>(cin), istream_iterator<double>(), ostream_iterator<double>(cout, "\n"), square);
	cout << endl;
	return 0;
}
