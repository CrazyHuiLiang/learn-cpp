#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template <class T> class LinkedList {
private:
	Node<T> *front; // 头指针
	Node<T> *rear; // 尾指针
	Node<T> *prevPtr; // 前一位置
	Node<T> *currPtr; // 当前位置
	int size; // 表中的元素个数
	int position; // 当前元素在表中的位置序号。 由函数reset使用
	
	Node<T> *newNode(const T &item, Node<T> *ptrNext=0); // 生成新结点，数据域为item， 指针域为ptrNext
	void freeNode(Node<T> *p); // 释放结点
	void copy(const LinkedList<T> &L); // 将链表L复制到当前表（假设当前表为空），被复制构造函数、operator=调用
	
public:
	LinkedList(); // 构造函数
	LinkedList(const LinkedList<T> &L); // 复制构造函数
	~LinkedList(); // 析构函数
	LinkedList<T> &operator = (const LinkedList<T> &L); // 重构赋值运算符
	
	int getSize() const; // 返回链表中元素个数
	bool isEmpty() const; // 链表是否为空
	
	void reset(int pos=0); // 初始化游标位置
	void next(); // 使游标移动到下一个结点
	bool endOfList() const; // 游标是否到了链尾
	int currentPosition() const; // 返回游标当前的位置
	
	void insertFront(const T &item); // 在表头插入结点
	void insertRear(const T &item); // 在表尾添加结点
	void insertAt(const T &item); // 在当前结点之前插入结点
	void insertAfter(const T &item); // 在当前结点之后插入结点
	
	T deleteFront(); // 删除头结点
	void deleteCurrent(); // 删除当前结点
	
	T& data(); // 返回当前结点成员数据的引用
	const T& data() const; // 返回对当前结点成员数据的常引用
	
	void clear(); // 清空链表：释放所有结点的内存空间。被析构函数、operator=调用
};


#endif // LINKEDLIST_H
