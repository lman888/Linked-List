#pragma once
class LinkedListNode
{
public:
	LinkedListNode();
	~LinkedListNode();

	LinkedListNode(size_t a_value);

	//The nodes data
	size_t m_data;

	//Pointers to the current nodes next and previous node
	LinkedListNode* m_nextNode;
	LinkedListNode* m_previousNode;
};

