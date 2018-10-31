// queue.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "lineQueue.h"
#include "circleQueue.h"
#include "stdlib.h"

int main()
{
	circleQueue<int> queue(5);
	int a1 = 1;
	int a2 = 2;
	int a3 = 3;
	int a4 = 4;
	int a5 = 5;
	int a6 = 6;
	int a7 = 7;
	queue.enQueue(&a1);
	queue.enQueue(&a2);
	queue.enQueue(&a3);
	queue.enQueue(&a4);
	queue.enQueue(&a5);
	queue.traverse();
	cout << endl;
	queue.outQueue();
	queue.outQueue();
	queue.traverse();
	cout << endl;
	queue.enQueue(&a6);
	queue.enQueue(&a7);
	queue.traverse();
	/*lineQueue<int> queue;
	Node<int> node1;
	Node<int> node2;
	Node<int> node3;
	Node<int> node4;
	Node<int> node5;
	Node<int> node6;
	node1.m_Data = 1;
	node2.m_Data = 2;
	node3.m_Data = 3;
	node4.m_Data = 4;
	node5.m_Data = 5;
	node6.m_Data = 6;
	queue.enQueue(&node1);
	queue.enQueue(&node2);
	queue.enQueue(&node3);
	queue.enQueue(&node4);
	queue.enQueue(&node5);
	queue.enQueue(&node6);
	queue.traverse();
	queue.outQueue();
	queue.traverse();
	queue.outQueue();
	queue.traverse();
	queue.outQueue();
	queue.traverse();
	queue.outQueue();
	queue.traverse();*/
	system("pause");
    return 0;
}

