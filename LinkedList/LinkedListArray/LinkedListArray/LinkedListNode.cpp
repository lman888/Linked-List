#include "LinkedListNode.h"



LinkedListNode::LinkedListNode()
{
	//Initial value of the node
	m_nodeData = 0;

	//Next and Previous nodes are null when the array is created
	m_next = nullptr;
	m_previous = nullptr;
}


LinkedListNode::~LinkedListNode()
{
}

LinkedListNode::LinkedListNode(size_t a_value)
{
	//Creating the first Nodes data
	m_nodeData = a_value;
	m_next = nullptr;
	m_previous = nullptr;
}
