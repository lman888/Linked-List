#include <iostream>
#include "LinkedListArray.h"

//PushBack and Insert are not working correctly

int main()
{
	LinkedListArray m_array;

	m_array.PushBack(10);
	m_array.PushBack(11);
	m_array.PushBack(78);
	m_array.PushBack(20);
	m_array.PushBack(8);
	m_array.PushBack(1);

	std::cout << "Array so far" << std::endl;
	m_array.Print();


	std::cout << "Array after Inserting" << std::endl;
	m_array.Insert(32, 3);
	m_array.Print();


	std::cout << "Array after PopBack" << std::endl;
	m_array.PopBack();
	m_array.Print();


	std::cout << "Array after PopFront" << std::endl;
	m_array.PopFront();
	m_array.Print();

	std::cout << "Array after PushFront" << std::endl;
	m_array.PushFront(100);
	m_array.Print();

	std::cout << "Array after PushBack" << std::endl;
	m_array.PushBack(200);
	m_array.Print();

	system("pause");
	return 0;
}