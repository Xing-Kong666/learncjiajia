#pragma once
#include <iostream>
using namespace std;

template<class T>
class arrayso {
public:
	arrayso(int capacity) {//初始容量
		m_capacity = capacity;
		m_size = 0;
		this->ptr = new T[m_capacity];
	}
	arrayso(const arrayso& p) {//重构拷贝构造防浅拷贝
		this->m_capacity = p.m_capacity;
		this->m_size = p.m_size;
		this->ptr = new T[p.m_capacity];
		for (int i = 0; i < p.m_size; i++) {
			this->ptr[i] = p.ptr[i];
		}
	}
	arrayso& operator=(const arrayso&p) {//防浅拷贝
		if (this->ptr != NULL) {
			delete[]ptr;
			ptr = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		this->m_capacity = p.m_capacity;
		this->m_size = p.m_size;
		this->ptr = new T[p.m_capacity];
		for (int i = 0; i < p.m_size; i++) {
			this->ptr[i] = p.ptr[i];
		}
		return *this;
	}
	T& operator[](int i) {//通过下标访问元素
		return this->ptr[i];
	}
	void push(const T& p) {//尾插
		if (m_capacity == m_size) {
			return;
		}
		//cout << m_size << endl;
		//cout << m_capacity << endl;
		this->ptr[m_size] = p;
		m_size++;
	}
	void pop() {//尾删
		if (m_size == 0)return;
		m_size--;
	}
	int getcapacity() {//容量大小
		return this->m_capacity;
	}
	int getsize() {//当前元素个数
		return this->m_size;
	}
	~arrayso() {//析构
		if (ptr != NULL) {
			delete[]ptr;
			ptr = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
	}
private:
	T* ptr;
	//数组总容量
	int m_capacity;
	//数组元素个数
	int m_size;
};