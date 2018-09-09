#pragma once
class LinkedList
{
public:

	#pragma region Public Functions

	LinkedList();
	~LinkedList();

	//Adds an element to the end of the list
	void PuckBack(size_t a_value);
	//Adds an element to the front of the list
	void PushFront(size_t a_value);
	//Inserts an element at a specific index of the list
	void Insert(size_t a_value, size_t a_index);
	//Removes an element from the list
	void Remove(size_t a_value);
	//Removes the first element in the index
	void PopFront();
	//Removes the last element in the list
	void PopBack();
	//Prints out the array
	void Print();

	#pragma endregion


private:

	//Pointer to the node and the node previous node and next node
	int* m_prevNode;
	int* m_nextNode;
	int* m_currNode;
};

