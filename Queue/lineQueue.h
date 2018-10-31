#include "stdafx.h"
#include "Node.h"
#include <iostream>
using namespace std;
template<class T>
class lineQueue
{
public:
	lineQueue();
	~lineQueue();
	void enQueue(Node<T> *num);
	void outQueue();
	void traverse();

private:
	//Node<T> *head;
	//Node<T> *tail;
	Node<T> *queue;
	int m_Length;
};
template<class T>
inline lineQueue<T>::lineQueue()
{
	queue = new Node<T>;
	queue->m_Data = 0;
	queue->next = nullptr;
	m_Length = 0;
	//head = queue;
	//tail = queue;

}

template<class T>
inline lineQueue<T>::~lineQueue()
{
	delete queue;
	queue = nullptr;
}

template<class T>
inline void lineQueue<T>::enQueue(Node<T> *num)
{
	Node<T> *p = queue;
	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = num;
	m_Length++;
}

template<class T>
inline void lineQueue<T>::outQueue()
{
	queue->next = queue->next->next;
	m_Length--;
}

template<class T>
inline void lineQueue<T>::traverse()
{
	Node<T> *p = queue->next;
	while (p)
	{
		cout << p->m_Data << endl;
		p = p->next;
	}
}