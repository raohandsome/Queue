#pragma once
#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;
template<class T>
class circleQueue
{
public:
	circleQueue(int capacity);
	~circleQueue();
	void enQueue(T *num);
	void outQueue();
	void traverse()const;
private:
	int m_iLength;
	int m_Capacity;
	int head;
	int tail;
	T *queue;
};

template<class T>
inline circleQueue<T>::circleQueue(int capacity)
{
	m_Capacity = capacity;
	queue = new T[m_Capacity];
	head = 0;
	tail = 0;
}

template<class T>
inline circleQueue<T>::~circleQueue()
{
	delete[]queue;
	queue = nullptr;
}

template<class T>
inline void circleQueue<T>::enQueue(T * num)
{
	if (m_iLength == m_Capacity)
		cout << "Queue is full." << endl;
	else
	{
		tail = tail % m_Capacity;
		queue[tail] = *num;
		tail++;
		m_iLength++;
	}
	
}

template<class T>
inline void circleQueue<T>::outQueue()
{
	if (m_iLength == 0)
		cout << "Queue is empty." << endl;
	else
	{
		head++;
		head = head % m_Capacity;
		m_iLength--;
	}
}

template<class T>
inline void circleQueue<T>::traverse()const
{
	int m = head;
	for (int i = 0; i < m_iLength; i++)
	{	
		m = m % m_Capacity;
		cout << queue[m] << endl;
		m++;

	}
}
