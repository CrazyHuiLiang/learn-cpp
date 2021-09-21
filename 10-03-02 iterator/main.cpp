#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

template<class T, class InputIterator, class OutputIterator> void mySort(InputIterator first, InputIterator last, OutputIterator result) {
	vector<T> s;
	for (; first != last; ++first) {
		s.push_back(*first);
	}
	sort(s.begin(), s.end());
	copy(s.begin(), s.end(), result);
}

int main(int argc, char *argv[]) {
	// 将s数组的内容排序后输出
	double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
	mySort<double>(a, a + 5, ostream_iterator<double>(cout, " "));
	cout << endl << endl;
	
	// 从标准输入读入若干整数，将排序后的结果输出
	mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}
