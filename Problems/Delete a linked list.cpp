/*

	Delete a Linked List.

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

void DeleteTheLinkedList(Node*& NodeHead) {

	Node* Current = NULL;

	while (NodeHead) {

		Current = NodeHead;
		NodeHead = NodeHead->NextNode;
		delete Current;
	}

}

void PrintLinkedList(Node* NodeHead) {

	while (NodeHead) {

		cout << NodeHead->Value << " -> ";
		NodeHead = NodeHead->NextNode;
	}
	cout << "NULL\n";

}

int main()
{

	Node* NodeHead = NULL;

	InsertAtBeginning(NodeHead, 5);
	InsertAtBeginning(NodeHead, 4);
	InsertAtBeginning(NodeHead, 3);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 1);

	cout << "Befeor Delete:\n";
	PrintLinkedList(NodeHead);

	DeleteTheLinkedList(NodeHead);

	cout << "After Delete:\n";
	PrintLinkedList(NodeHead);

	return 0;

}