#include <iostream>
#include "LinkedListNode.h"

#pragma once
class LinkedListArray
{
public:
	LinkedListArray();
	~LinkedListArray();


	int m_count = 0;

	//The first node in the array
	LinkedListNode* m_startNode;

	//Adds the element to the end of the list
	void PushBack(size_t a_value);

	//Adds the element to the front of the list
	void PushFront(size_t a_value);

	//Removes the last element in the array
	void PopBack();

	//Inserts an element into the array at the index
	void Insert(size_t a_value, int a_index);

	//Removes the first element in the array
	void PopFront();

	//Removes a value from the array
	void Remove(size_t a_index);

	//Prints out the array
	void Print();

	//First node in the array
	LinkedListNode* m_begin();

	//Last node in the array
	LinkedListNode* m_endNode();
};
