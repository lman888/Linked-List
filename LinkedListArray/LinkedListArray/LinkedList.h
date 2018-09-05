#pragma once
class LinkedList
{
public:
	LinkedList();
	~LinkedList();


private:

	int* m_prevNode;
	int* m_nextNode;
	int* m_currNode;
};

