#include "LinkedListNode.h"



LinkedListNode::LinkedListNode()
{
	//Sets the Nodes default data to 0
	m_data = 0;

	//Sets it next and previous connection to nullptr 
	m_nextNode = nullptr;
	m_previousNode = nullptr;
}


LinkedListNode::~LinkedListNode()
{
}

LinkedListNode::LinkedListNode(size_t a_value)
{
	//Gives the the users data
	m_data = a_value;

	//Sets it next and previous connection to nullptr 
	m_nextNode = nullptr;
	m_previousNode = nullptr;
}
