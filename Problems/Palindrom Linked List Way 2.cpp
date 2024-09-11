/*

	Check if the Linked List is Palindrom.

*/

#include <iostream>

using namespace std;

class Node {

public:
	int Value;
	Node* NextNode;

};

void InsertAtBeginning(Node*& NodeHead, int Val) {


	Node* TheNewNode = new Node();

	TheNewNode->Value = Val;
	TheNewNode->NextNode = NodeHead;

	NodeHead = TheNewNode;
}

void PrintList(Node* NodeHead) {

	while (NodeHead != NULL) {

		cout << NodeHead->Value << " -> ";
		NodeHead = NodeHead->NextNode;
	}
	cout << "NULL\n";
}

void ReversList(Node*& head) {

	if (head == NULL || head->NextNode == NULL)
		return;

	Node* prev = NULL, * Current = head->NextNode;
	head->NextNode = NULL;

	while (Current != NULL) {

		prev = head;
		head = Current;
		Current = Current->NextNode;
		head->NextNode = prev;
	}

}

bool IsPalindromList(Node* NodeHead) {

	if (NodeHead == NULL || NodeHead->NextNode == NULL)
		return true;

	Node* FastPointer = NodeHead, * SlowPointer = NodeHead;
	
	while (FastPointer!= NULL && (FastPointer->NextNode != NULL)) {

		FastPointer = FastPointer->NextNode->NextNode;
		SlowPointer = SlowPointer->NextNode;
	}

	FastPointer = NodeHead;
	ReversList(SlowPointer);

	while (SlowPointer != NULL && FastPointer != NULL) {

		if (SlowPointer->Value != FastPointer->Value)
			return false;

		SlowPointer = SlowPointer->NextNode;
		FastPointer = FastPointer->NextNode;

	}

	return true;

}

int main()
{
    
	Node* NodeHead = NULL;

	InsertAtBeginning(NodeHead, 1);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 9);
	InsertAtBeginning(NodeHead, 6);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 1);

	cout << "\nMain List elemnts:\n";
	PrintList(NodeHead);

	if (IsPalindromList(NodeHead))
		cout << "yes the linked is is palindrom\n";
	else
		cout << "no the linked list is not palindrom\n";

	cout << "\nMain List elemnts:\n";
	PrintList(NodeHead);

	return 0;

}

