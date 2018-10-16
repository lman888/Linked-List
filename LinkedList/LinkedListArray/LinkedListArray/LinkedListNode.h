#pragma once
class LinkedListNode
{
public:
	LinkedListNode();
	~LinkedListNode();

	LinkedListNode(size_t a_value);

	//Node's data
	int m_nodeData;

	//Previous node to the current Node
	LinkedListNode* m_next;

	//Next node to the current Node
	LinkedListNode* m_previous;

};

