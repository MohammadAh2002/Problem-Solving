/*

	Write a Function to Check if Element Exit In Linked List.

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

void PrintLinkedList(Node* NodeHead) {

	while (NodeHead) {

		cout << NodeHead->Value << " -> ";
		NodeHead = NodeHead->NextNode;
	}
	cout << "NULL\n";

}

void DeleteFirstNode(Node*& NodeHead) {

	if (NodeHead == NULL)
		return;

	Node* FirstNode = NodeHead;
	NodeHead = NodeHead->NextNode;

	delete FirstNode;

}

void InsertAtEnd(Node*& NodeHead, int Val) {

	Node* TheNewNode = new Node;
	TheNewNode->Value = Val;
	TheNewNode->NextNode = NULL;

	if (NodeHead == NULL) {

		NodeHead = TheNewNode;
		return;

	}

	Node* LastNode = NodeHead;

	while (LastNode->NextNode != NULL)
		LastNode = LastNode->NextNode;

	LastNode->NextNode = TheNewNode;


}

bool IsElementExitInList(Node* NodeHead, int Val) {

	while (NodeHead != NULL) {

		if (NodeHead->Value == Val)
			return true;

		NodeHead = NodeHead->NextNode;

	}

	return false;

}

int main()
{

	Node* Node1 = NULL;

	InsertAtBeginning(Node1, 9);
	InsertAtBeginning(Node1, 7);
	InsertAtBeginning(Node1, 5);
	InsertAtBeginning(Node1, 3);
	InsertAtBeginning(Node1, 1);

	cout << "\nthe list:\n";
	PrintLinkedList(Node1);

	if (IsElementExitInList(Node1, 5))
		cout << "\nyes the element in the list\n";
	else
		cout << "\nno the elemnt is not in the list\n";

	return 0;

}