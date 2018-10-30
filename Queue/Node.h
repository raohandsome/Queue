#pragma once
#include "stdafx.h"
template <class T>

class Node
{
public:
	Node();
	~Node();
	T m_Data;
	Node *next;
};

template<class T>
inline Node<T>::Node()
{
	m_Data = 0;
	next = nullptr;
}

template<class T>
inline Node<T>::~Node()
{
}
