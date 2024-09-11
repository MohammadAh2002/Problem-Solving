/*
 
	Write a recursive function that is given a singly linked list where the data type is integer.
	The function returns the count of negative numbers in the list.

*/

#include <iostream>

using namespace std;

class SinglyLinkedList {

public:
	int Data;
	SinglyLinkedList* Next;


};

int NegativeNumbersCount(SinglyLinkedList* ListHead) {

	if (ListHead == NULL)
		return 0;

	int Count = NegativeNumbersCount(ListHead->Next);

	if (ListHead->Data < 0) 
		Count++;

	return Count;
}

int main()
{
 
	SinglyLinkedList* ListHead = NULL;

	SinglyLinkedList* Node1 = new SinglyLinkedList;
	SinglyLinkedList* Node2 = new SinglyLinkedList;
	SinglyLinkedList* Node3 = new SinglyLinkedList;
	SinglyLinkedList* Node4 = new SinglyLinkedList;

	ListHead = Node1;

	Node1->Data = 1;
	Node1->Next = Node2;

	Node2->Data = -2;
	Node2->Next = Node3;

	Node3->Data = 3;
	Node3->Next = Node4;

	Node4->Data = -4;
	Node4->Next = NULL;

	cout << NegativeNumbersCount(ListHead);

}
