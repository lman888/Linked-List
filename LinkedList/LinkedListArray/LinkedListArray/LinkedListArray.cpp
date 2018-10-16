#include "LinkedListArray.h"



LinkedListArray::LinkedListArray()
{
	m_count = 0;
	m_startNode = nullptr;
}


LinkedListArray::~LinkedListArray()
{
}

void LinkedListArray::PushBack(size_t a_value)
{
	//If the start node is null, we set it to the value that is inputed
	if (m_startNode == nullptr)
	{
		//Creates a temporary node
		LinkedListNode* tempNode = new LinkedListNode();

		//Sets the temp nodes data
		tempNode->m_nodeData = a_value;

		//Stores the temp node into the startnode
		m_startNode = tempNode;

		//Increments the array size
		m_count++;
	}
	else
	{
		//Creates a temporary node
		LinkedListNode* tempNode = new LinkedListNode();

		//Sets the temp nodes data
		tempNode->m_nodeData = a_value;

		//increments the array count
		m_count++;

		//Sets the new current node to be start node
		LinkedListNode* m_currNode = m_startNode;

		//Iterates through the array
		while (m_currNode->m_next != nullptr)
		{
			//Stores the node into the nodes next position until it reaches a nullptr
			m_currNode = m_currNode->m_next;
		}

		//Connects the current nodes next into the tempnode
		m_currNode->m_next = tempNode;

		//sets the tempnode's previous to be the current node
		tempNode->m_previous = m_currNode;
	}
}

void LinkedListArray::PushFront(size_t a_value)
{
	//If the start nodes previous connection is now nullptr
	if (m_startNode->m_previous == nullptr)
	{
		//Creates a temporary node
		LinkedListNode* tempNode = new LinkedListNode();

		//Sets the temp nodes value
		tempNode->m_nodeData = a_value;

		//Assigns the temp nodes next to be startnode
		tempNode->m_next = m_startNode;

		//Assigns the startnodes previous connection to be tempnode
		m_startNode->m_previous = tempNode;

		//Temp node now becomes the new startnode
		m_startNode = tempNode;

		//Increments the array count
		m_count++;
	}
}

void LinkedListArray::Insert(size_t a_value, int a_index)
{
	//If the index is at the beggining of the array, we call the PushFront function
	if (a_index == 0)
	{
		PushFront(a_value);
		return;
	}

	//Tracks the index of the array
	int m_indexOfNode = 0;

	//Create a tempNode
	LinkedListNode* tempNode = new LinkedListNode();

	//Store temp nodes data
	tempNode->m_nodeData = a_value;

	//Create current node and store it as the startnode
	LinkedListNode* currNode = m_startNode;

	while (currNode->m_next != nullptr)
	{
		//Increment the index tracker
		m_indexOfNode++;


		if (m_indexOfNode == a_index)
		{
			break;
		}

		//Set current node to be its next
		currNode = currNode->m_next;
	}

	//Temp nodes next to be current node
	tempNode->m_next = currNode;

	//Sets temp node to be current nodes previous
	tempNode->m_previous = currNode->m_previous;

	//Sets temp node to be current node 
	currNode->m_previous->m_next = tempNode;

	//sets temp node to be current nodes previous
	currNode->m_previous = tempNode;
}

void LinkedListArray::PopFront()
{
	//Create a new current node
	LinkedListNode* currNode = m_startNode;

	//Set start node to be its next node
	m_startNode = currNode->m_next;

	//Set current node to null
	currNode->m_next->m_previous = nullptr;

	//Decrease the count of the array
	m_count--;

	//Delete current node
	delete currNode;
}

void LinkedListArray::PopBack()
{
	//Create a new current node
	LinkedListNode* currNode = m_startNode;

	//Iterate through the nodes 
	while (currNode->m_next != nullptr)
	{
		//Set currnodes data into the next node
		currNode = currNode->m_next;
	}

	//Set currnode to null
	currNode->m_previous->m_next = nullptr;

	//Decrease the count of the array size
	m_count--;

	delete currNode;
}

void LinkedListArray::Remove(size_t a_index)
{
	LinkedListNode* currNode = m_startNode;

	//If the index of the node that is being removed is at the beginning of the array call PopFront
	if (a_index == 1)
	{
		PopFront();
		return;
	}

	//If the index of the node that is being removed is at the end of the array call PopFront
	if (a_index == m_count)
	{
		PopBack();
		return;
	}

	int m_indexOfNode = 0;

	//Iterates through the array
	while (currNode->m_next != nullptr)
	{
		m_indexOfNode++;

		//If we find the index in the array
		if (m_indexOfNode == a_index)
		{
			break;
		}

		currNode = currNode->m_next;
	}

	//Stores the current nodes data into its next node
	currNode->m_previous->m_next = currNode->m_next;

	//Stores the current nodes next data into its previous node
	currNode->m_next->m_previous = currNode->m_previous;

	//delete the currNode
	delete currNode;

	//Decrease the array count
	m_count--;
}

void LinkedListArray::Print()
{
	//Create a new current node
	LinkedListNode* currNode = m_startNode;

	//Iterate through all the nodes and print them
	while (currNode != nullptr)
	{
		std::cout << "[" << currNode->m_nodeData << "]" << std::endl;

		currNode = currNode->m_next;
	}
}

LinkedListNode * LinkedListArray::m_begin()
{
	//Returns start node
	return m_startNode;
}

LinkedListNode * LinkedListArray::m_endNode()
{
	//Creates current node
	LinkedListNode* currNode = m_startNode;

	//Iterates through the array
	while (currNode->m_next != nullptr)
	{
		//Sets current node to its next node
		currNode = currNode->m_next;
	}

	return currNode;
}

