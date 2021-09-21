#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main(int argc, char *argv[]) {
	const int N=5;
	vector<int> s(N); // 容器
	for (int i = 0; i<N; i++) {
		cin >> s[i];
	}
	transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int> ());
	cout << endl;
	return 0;
}
