/*

	Split Linked List Into Two Lists.

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

void InsertAtEnd(Node*& head, int Value) {

	Node* new_node = new Node();

	new_node->Value = Value;
	new_node->NextNode = NULL;

	if (head == NULL) {
		head = new_node;
		return;
	}

	Node* LastNode = head;
	while (LastNode->NextNode != NULL)
	{
		LastNode = LastNode->NextNode;
	}

	LastNode->NextNode = new_node;
	return;
}

void PrintLinkedListMemeoryAdresse(Node* NodeHead) {

	short i = 1;

	if (NodeHead == NULL) {

		cout << "you dont have any elemnt in the linked list :-(\n";
		return;
	}

	while (NodeHead != NULL) {

		printf("elemnts %d memery adress:%p\n", i, NodeHead);

		NodeHead = NodeHead->NextNode;

		i++;
	}


}

void PrintList(Node* NodeHead) {

	while (NodeHead != NULL) {

		cout << NodeHead->Value << " -> ";
		NodeHead = NodeHead->NextNode;
	}
	cout << "NULL\n";
}

void SplitListIntoTwo(Node* NodeHead, Node*& OddList, Node*& EvenList) {

	while (NodeHead != NULL) {

		if (NodeHead->Value % 2 == 0)
			InsertAtEnd(EvenList, NodeHead->Value);
		else
			InsertAtEnd(OddList, NodeHead->Value);

		NodeHead = NodeHead->NextNode;
		
	}

}

int main()
{

	Node* NodeHead = NULL;
	Node* OddList = NULL;
	Node* EvenList = NULL;

	InsertAtBeginning(NodeHead, 5);
	InsertAtBeginning(NodeHead, 4);
	InsertAtBeginning(NodeHead, 3);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 1);

	SplitListIntoTwo(NodeHead, OddList, EvenList);

	cout << "Main List:\n";
	PrintList(NodeHead);

	cout << "\nEven List:\n";
	PrintList(EvenList);

	cout << "\nOdd List:\n";
	PrintList(OddList);

	return 0;

}