/*

	Write a function that is passed the head pointer of a singly linked list where the data
	type of each node is an integer and that displays those integers, one per line, in the
	reverse order they appear in the list.

*/

#include <iostream>

using namespace std;

struct stList {

	int Value;

	stList* Next;

};

void PrintListInReverseOrder(stList* ListHead) {

	if (ListHead != NULL) {

		PrintListInReverseOrder(ListHead->Next);
		cout << ListHead->Value << endl;

	}

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

	PrintListInReverseOrder(ListHead);

	return 0;
}
