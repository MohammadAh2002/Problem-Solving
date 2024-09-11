/*

	Write a Function to Merge Two Linked Lists.

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

Node* MergeTwoLists(Node* Node1Head, Node* Node2Head) {

	if (Node1Head == NULL && Node2Head == NULL)
		return NULL;

	if (Node1Head == NULL)
		return Node2Head;

	if (Node2Head == NULL)
		return Node1Head;

	Node* MergedNodeHead = NULL;

	while (true) {

		if (Node1Head != NULL) {

			InsertAtEnd(MergedNodeHead, Node1Head->Value);

			Node1Head = Node1Head->NextNode;
		}

		if (Node2Head != NULL) {

			InsertAtEnd(MergedNodeHead, Node2Head->Value);

			Node2Head = Node2Head->NextNode;
		}

		if (Node1Head == NULL && Node2Head == NULL)
			break;

	}

	return MergedNodeHead;

}

int main()
{

	Node* Node1 = NULL;
	Node* Node2 = NULL;

	InsertAtBeginning(Node1, 9);
	InsertAtBeginning(Node1, 7);
	InsertAtBeginning(Node1, 5);
	InsertAtBeginning(Node1, 3);
	InsertAtBeginning(Node1, 1);

	InsertAtBeginning(Node2, 10);
	InsertAtBeginning(Node2, 8);
	InsertAtBeginning(Node2, 6);
	InsertAtBeginning(Node2, 4);
	InsertAtBeginning(Node2, 2);

	cout << "\nfirst list:\n";
	PrintLinkedList(Node1);

	cout << "\nsecond list:\n";
	PrintLinkedList(Node2);

	Node* MergedNodesHead = MergeTwoLists(Node1,Node2);

	cout << "\nMerged List:\n";
	PrintLinkedList(MergedNodesHead);

	return 0;

}