/*

	Write a function that is passed an array of integers and a “target” number
	and that returns the number of occurrences of the target in the array. Solve
	the problem first using iteration, then recursion.

	Note: using a linked list instead of an array.

*/

#include <iostream>

using namespace std;

struct stList {

	int Value;

	stList* Next;

};

int HitsNumberLoop(stList* ListHead,int Target) {

	stList* Current = ListHead;

	int Hits = 0;

	while (Current != NULL) {

		if (Current->Value == Target)
			Hits++;

		Current = Current->Next;

	}

	return Hits;

}

int HitsNumberRecursive(stList* ListHead, int Target) {

	if (!ListHead)
		return 0;

	if (ListHead->Value == Target) {

		return 1 + HitsNumberRecursive(ListHead->Next, Target);
	}

	return HitsNumberRecursive(ListHead->Next, Target);

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
	Node5->Value = 3;

	cout << "Iterative Sum = " << HitsNumberLoop(ListHead,3) << endl;

	cout << "Recursive Sum = " << HitsNumberRecursive(ListHead,3) << endl;

	return 0;
}
