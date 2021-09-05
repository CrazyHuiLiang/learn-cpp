#include <iostream>
#include <iomanip>

using namespace std;


#ifndef ARRAY_H
#define ARRAY_H

template <class T> // 数组类模板定义
class Array {
private:
	T* list; // 用于存放动态分配的数组内存首地址
	int size; // 数组大小（元素个数）
public:
	Array(int sz=50); // 构造函数
	Array(const Array<T> &a); // 复制构造函数
	~Array(); // 析构函数
	Array<T>& operator=(const Array<T> &rhs); // 重载 =
	T& operator[](int i); // 重载[]
	const T& operator[](int i) const; // 重载[], 常函数
	operator T*(); // 重载到T* 类型的转换
	operator const T*() const;
	int getSize() const; // 取数组的大小
	void resize(int sz); // 修改数组的大小
};

// 构造函数
template <class T> Array<T>::Array(int sz) {
	assert(sz >= 0);
	size = sz;
	list = new T[size]; // 动态分配size个T类型的元素空间
}

// 复制构造函数
template<class T> Array<T>::Array(const Array<T> &a) {
	size = a.size;
	list = new T[size];
	for (int i=0; i<size; i++) {
		list[i] = a.list[i];
	}
}

// 析构函数
template <class T>Array<T>::~Array() {
	delete [] list;
}

// 重载"="运算符，将对象rhs赋值给本对象。实现对象之间的整体赋值
template <class T> Array<T>& Array<T>::operator= (const Array<T>& rhs) {
	// 如果本对象中数组大小与rhs不同，则删除数组原有内存，然后重新分配
	if(&rhs != this) {
		if(size != rhs.size) {
			delete [] list; // 删除数组原有内存
			size = rhs.size; // 设置本对象的数组大小
			list = new T[size]; // 重新分配size个元素的内存
		}
		// 从对象rhs复制数组元素到本对象
		for(int i = 0; i<size; i++) {
			list[i] = rhs.list[i];
		}
	}
	return *this; // 返回当前对象的引用
}

// 重载下标运算符，实现与普通数组一样通过下标访问元素，具有越界检查功能
template <class T> T& Array<T>::operator[](int n) {
	assert(0<=n && n<size); // 检查下标是否越界
	return list[n];
}

template <class T> const T& Array<T>::operator[](int n) const {
	assert(0<=n && n<size); // 检查下标是否越界
	return list[n];
}

// 重载指针转换运算符，将Array类的对象名转换为T类型的指针
template <class T>Array<T>::operator T*() {
	return list; // 返回当前对象私有数组的首地址
}

// 取当前数组的大小
template <class T> int Array<T>::getSize() const {
	return size;
}

// 将数组大小修改未sz
template <class T> void Array<T>::resize(int sz) {
	assert(sz >= 0);
	if(sz == size) {
		return;
	}
	T* newList = new T[sz]; // 申请新的数组内存
	int n = (sz < size)? sz: size;// 将sz与size中较小的一个赋值给n
	for(int i=0; i<n; i++) {
		newList[i] = list[i];
	}
	delete[] list;// 删除原数组
	list = newList;
	size = sz; // 更新size
}
#endif



int main(int argc, char *argv[]) {
	
	// 用来存放质数的数组，初始状态有10个元素
	Array<int> a(10);
	int n, count=0;
	cout << "Enter a value >= 2 as upper limit for prime numbers: ";
	cin >> n;
	// 检查i能否被比它小的质数整除
	for (int i=2; i<=n; i++) {
		bool isPrime = true;
		for (int j=0; j<count; j++) {
			// 若i被a[j]整除，说明i不是质数
			if (i%a[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			if (count == a.getSize()) {
				a.resize(count * 2);
			}
			a[count++] = i;
		}
	}
	for (int i=0; i<count; i++) {
		cout << setw(8) << a[i];
	}
	cout << endl;
	
	return 0;
}

