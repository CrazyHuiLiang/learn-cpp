#include <iostream>
#include <vector>
using namespace std;


double average(const vector<double> &arr) {
	double sum = 0;
	for (unsigned i=0; i<arr.size(); i++) {
		sum += arr[i];
	}
	return sum/arr.size();
}


int main(int argc, char *argv[]) {
	/*
	vector对象定义
	vector<元素类型> 数组对象名(数组长度);
	*/
	vector<int> arr(5);
	// 对数组元素的以后用
	cout << arr[1] << endl;
	cout << arr.size() << endl;
	
	
	
	// Demo 2
	cout << "Demo 2" << endl;
	unsigned n;
	cout << "n=";
	cin >> n;
	vector<double> arr2(n);
	cout << "Please input" << n << "real numbers:" << endl;
	for(unsigned i=0; i<n; i++) {
		cin >> arr2[i];
	}
	cout << "Average=" << average(arr2) << endl;
	
	
	
	// Demo 3
	cout << "Demo 3" << endl;
	vector<int> v = {1, 2, 3};
	for (auto i = v.begin(); i != v.end(); ++i) {
		cout << *i << endl;
	}
	for (auto e:v) {
		cout << e << endl;
	}
	return 0;
}
