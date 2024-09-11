/*

	In this problem, you will write functions to store and manipulate a collection of student 
	records. A student record contains a student number and a grade, both integers. The 
	following functions are to be implemented:

	- addRecord: This function takes a pointer to a collection of student records (a student 
	number and a grade), and it adds a new record with this data to the collection.
	- averageRecord: This function takes a pointer to a collection of student records 
	and returns the simple average of student grades in the collection as a double.\

	The collection can be of any size. The addRecord operation is expected to be 
	called frequently, so it must be implemented efficiently.

*/

#include <iostream>

using namespace std;

struct stStudent {

	short ID, Grade;

	stStudent* Next;
};

void AddRecord(stStudent* &MainRecord, short ID, short Grade) {

	stStudent* NewNode = new stStudent;
	NewNode->ID = ID;
	NewNode->Grade = Grade;
	NewNode->Next = NULL;

	if (MainRecord == NULL) {

		MainRecord = NewNode;
		return;
	}

	stStudent* Current = new stStudent;
	Current = MainRecord;

	while (Current->Next != NULL)
	{
		Current = Current->Next;
	}

	Current->Next = NewNode;

}

double AverageRecord(stStudent* MainRecord) {

	short RecordsNumber = 0, Sum = 0;

	if (MainRecord == NULL) {

		return 0;

	}

	stStudent* CurrentNode = MainRecord;

	while (CurrentNode != NULL) {

		Sum = Sum + CurrentNode->Grade;
		RecordsNumber++;
		CurrentNode = CurrentNode->Next;

	}

	return Sum / RecordsNumber;

}

int main()
{

	stStudent* ListHead = NULL;

	stStudent* Node1 = new stStudent;
	stStudent* Node2 = new stStudent;
	stStudent* Node3 = new stStudent;

	Node1->ID = 1; Node1->Grade = 90;
	Node2->ID = 2; Node2->Grade = 80;
	Node3->ID = 3; Node3->Grade = 66;

	//ListHead = Node1;
	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = NULL;

	cout << AverageRecord(ListHead);


	return 0;

}

