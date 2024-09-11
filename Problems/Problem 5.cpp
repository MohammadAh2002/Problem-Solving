/*

	Write a function removeRecord that takes a pointer to a studentCollection and a
	student number and that removes the record with that student number from
	the collection.

*/

#include <iostream>

using namespace std;

struct stStudent {

	int ID, Grade;

	stStudent* Next;

};

bool RemoveRecord(stStudent*& ListHead, int ID) {

	if (ListHead == NULL)
		return true;

	stStudent* Current = ListHead;
	stStudent* previous = ListHead;

	while (Current->ID != ID) {

		previous = Current;
		Current = Current->Next;

	}

	if (Current->ID != ID)
		return false;

	previous->Next = Current->Next;

	if(ListHead->ID == ID)
		ListHead = ListHead->Next;

	delete Current;
	return true;

}

int main()
{
   
	stStudent* ListHead = NULL;

	stStudent* Node1 = new stStudent;
	stStudent* Node2 = new stStudent;
	stStudent* Node3 = new stStudent;
	stStudent* Node4 = new stStudent;
	stStudent* Node5 = new stStudent;

	Node1->ID = 1; Node1->Grade = 90;
	Node2->ID = 2; Node2->Grade = 80;
	Node3->ID = 3; Node3->Grade = 66;
	Node4->ID = 4; Node4->Grade = 56;
	Node5->ID = 5; Node5->Grade = 88;

	ListHead = Node1;
	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = Node4;
	Node4->Next = Node5;
	Node5->Next = NULL;

	if (RemoveRecord(ListHead, 1))
		cout << "Th Record Deleted Successfully\n";
	else
		cout << "Failed to Remove Record\n";

	while (ListHead) {

		cout << "ID = " << ListHead->ID << ", Grade = " << ListHead->Grade << "\n";
		ListHead = ListHead->Next;
	}

	return 0;
}
