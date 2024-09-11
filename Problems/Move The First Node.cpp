/*

	Write a Function to Move the First Node to Another Linked List.

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

void MoveFirstNodeToAnotherList(Node*& NodeTo, Node*& NodeFrom) {

	InsertAtBeginning(NodeTo, NodeFrom->Value);
	DeleteFirstNode(NodeFrom);

}

int main()
{

	Node* NodeTo = NULL;
	Node* NodeFrom = NULL;

	InsertAtBeginning(NodeTo, 5);
	InsertAtBeginning(NodeTo, 4);
	InsertAtBeginning(NodeTo, 3);
	InsertAtBeginning(NodeTo, 2);
	InsertAtBeginning(NodeTo, 2);
	InsertAtBeginning(NodeTo, 1);

	InsertAtBeginning(NodeFrom, 11);
	InsertAtBeginning(NodeFrom, 10);
	InsertAtBeginning(NodeFrom, 9);
	InsertAtBeginning(NodeFrom, 8);
	InsertAtBeginning(NodeFrom, 7);
	InsertAtBeginning(NodeFrom, 6);

	cout << "List one before Change:\n";
	PrintLinkedList(NodeTo);

	cout << "List two before Change:\n";
	PrintLinkedList(NodeFrom);

	MoveFirstNodeToAnotherList(NodeTo, NodeFrom);

	cout << "\n\nList one After Change:\n";
	PrintLinkedList(NodeTo);

	cout << "List two After Change:\n";
	PrintLinkedList(NodeFrom);

}