/*

	Check if the Linked List is Palindrom.

*/

#include <iostream>

using namespace std;

class Node {

public:

	short Value;
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

int GetLinkedListLenth(Node* NodeHead) {

	int Lenth = 0;

	while (NodeHead != NULL) {

		Lenth++;
		NodeHead = NodeHead->NextNode;

	}

	return Lenth;

}

bool IsPalindromList(Node* NodeHead) {

	if (NodeHead == NULL || NodeHead->NextNode == NULL)
		return true;

	int Lenth = GetLinkedListLenth(NodeHead);

	Node* Head2 = NodeHead;

	for (int i = 1; i <= Lenth/2 ; i++) {

		Head2 = Head2->NextNode;

	}

	ReversList(Head2);

	while (Head2 != NULL && NodeHead != NULL) {

		if (Head2->Value != NodeHead->Value)
			return false;

		Head2 = Head2->NextNode;
		NodeHead = NodeHead->NextNode;
	}
		
	return true;

}

int main()
{

	Node* NodeHead = NULL;

	InsertAtBeginning(NodeHead, 1);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 9);
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