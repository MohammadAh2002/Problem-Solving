/*

	Write a function to compute the sum of just the positive numbers in an array
	of integers. First, solve the problem using iteration. Then, using the technique
	shown in this chapter, convert your iterative function to a recursive function.

	Note: using a linked list instead of an array.

*/

#include <iostream>

using namespace std;

struct stList {

	int Value;

	stList* Next;

};

int UsingLoop(stList* ListHead) {

	stList* Current = ListHead;

	int Sum = 0;

	while (Current != NULL) {

		if (Current->Value > 0)
			Sum += Current->Value;

		Current = Current->Next;

	}

	return Sum;

}

int UsingRecursion(stList* ListHead) {

	if (!ListHead)
		return 0;

	if(ListHead->Value > 0)
	return ListHead->Value + UsingRecursion(ListHead->Next);

	return UsingRecursion(ListHead->Next);

}

int main()
{
   
	stList* ListHead = NULL;

	stList* Node1 = new stList;
	stList* Node2 = new stList;
	stList* Node3 = new stList;
	stList* Node4 = new stList;
	stList* Node5 = new stList;

	ListHead = Node1;
	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = Node4;
	Node4->Next = Node5;
	Node5->Next = NULL;

	Node1->Value = 1;
	Node2->Value = 2;
	Node3->Value = 3;
	Node4->Value = 4;
	Node5->Value = 5;

	cout << "Iterative Sum = " << UsingLoop(ListHead) << endl;

	cout << "Recursive Sum = " << UsingRecursion(ListHead) << endl;

	return 0;
}
