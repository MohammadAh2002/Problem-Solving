/*

	remove duplicates from linked list.

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

	while (NodeHead != NULL) {

		cout << NodeHead->Value << " -> ";
		NodeHead = NodeHead->NextNode;
	}
	cout << "NULL\n";

}

void RemoveduplicatesFromLinkedList(Node* NodeHead) {

	if (NodeHead == NULL)
		return;

	Node* Current = NodeHead, * NodeToDelete;

	while (Current->NextNode != NULL) {

		if (Current->Value == Current->NextNode->Value) {

			NodeToDelete = Current->NextNode;

			Current->NextNode = Current->NextNode->NextNode;

			delete NodeToDelete;

		}
		else {
	
			Current = Current->NextNode;
		}

	}

}

int main()
{

	Node* NodeHead = NULL;

	InsertAtBeginning(NodeHead, 5);
	InsertAtBeginning(NodeHead, 5);
	InsertAtBeginning(NodeHead, 5);
	InsertAtBeginning(NodeHead, 4);
	InsertAtBeginning(NodeHead, 3);
	InsertAtBeginning(NodeHead, 3);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 1);
	InsertAtBeginning(NodeHead, 1);
	InsertAtBeginning(NodeHead, 1);

	RemoveduplicatesFromLinkedList(NodeHead);

	cout << "\nthe linkedlist is:\n";
	PrintLinkedList(NodeHead);

	return 0;

}