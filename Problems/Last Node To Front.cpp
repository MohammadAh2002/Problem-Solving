/*

	Write a Function to Move The Last Node To The Front.

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

void DeleteFirsNode(Node*& NodeHead) {

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

void MoveTheLastNodeToTheFront(Node*& NodeHead) {

	if (NodeHead == NULL) {

		cout << "you dont have any elemnt in the linked list\n";
		return;
	}
	if (NodeHead->NextNode == NULL)
		return;

	Node* LastNode = NodeHead, * Prev = NULL;

	while (LastNode->NextNode != NULL) {

		Prev = LastNode;
		LastNode = LastNode->NextNode;
	}

	Prev->NextNode = NULL;

	InsertAtBeginning(NodeHead, LastNode->Value);

	delete LastNode;

}

int main()
{

	Node* Node1 = NULL;

	InsertAtBeginning(Node1, 9);
	InsertAtBeginning(Node1, 7);
	InsertAtBeginning(Node1, 5);
	InsertAtBeginning(Node1, 3);
	InsertAtBeginning(Node1, 1);

	cout << "\nthe list before:\n";
	PrintLinkedList(Node1);

	MoveTheLastNodeToTheFront(Node1);

	cout << "\nthe list After:\n";
	PrintLinkedList(Node1);

	return 0;

}