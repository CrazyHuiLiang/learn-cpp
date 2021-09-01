#include <iostream>

using namespace std;


struct Student {
	int id;
	float gpa;
};

template <class T>
// 类模板：实现对任意类型数据进行存取
class Store {
private:
	T item; // item用于存放任意类型的数据
	bool haveValue; // 标记item是否已被存入内容
public:
	Store();
	T &getElem(); // 提取数据函数
	void putElem(const T &x); // 存入数据函数
};

template <class T>
Store<T>::Store(): haveValue(false) {}

template <class T>
T &Store<T>::getElem() {
	if (!haveValue) {
		cout << "No item present" << endl;
		exit(1);
	}
	return item;
}

template <class T>
void Store<T>::putElem(const T &x) {
	haveValue = true;
	item = x;
}


int main(int argc, char *argv[]) {
	Store<int> s1, s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout << s1.getElem() << ' ' << s2.getElem() << endl;
	
	Student g = {1000, 23};
	Store<Student> s3;
	s3.putElem(g);
	cout << "The student id is "<<s3.getElem().id << endl;
	
	Store<double> d;
	cout << "Retrieving object D... ";
	cout << d.getElem() << endl;
	return 0;
}

