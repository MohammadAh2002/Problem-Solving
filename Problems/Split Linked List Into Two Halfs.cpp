/*

	Split Linked List Into Two Halfs.

*/

#include <iostream>

using namespace std;

class node {

public:

	int Value;
	node* NextNode;
};

void InsertAtBeginning(node*& NodeHead, int Val) {



	node* TheNewNode = new node();

	TheNewNode->Value = Val;
	TheNewNode->NextNode = NodeHead;

	NodeHead = TheNewNode;
}

int GetLinkedListLenth(node* NodeHead) {

	int Lenth = 0;

	while (NodeHead != NULL) {
	
		Lenth++;
		NodeHead = NodeHead->NextNode;
	
	}

	return Lenth;

}

void SpliteLinkedListIntoTwoHalfs(node* NodeHead) {

	short LinkedListLenth = GetLinkedListLenth(NodeHead);

	if (LinkedListLenth == 0) {
		cout << "you dont have any elemnts in you linked list :-(\n";
		return;
	}
	if (LinkedListLenth == 1) {

		cout << "ther is only one elemnts: " << NodeHead->Value << '\n';
		return;
	}

	cout << "the first half:\n";
	for (short i = 0; i <= LinkedListLenth / 2;i++) {

		cout << NodeHead->Value << " ";
		NodeHead = NodeHead->NextNode;
	}

	cout << "\nthe second half:\n";
	
	while (NodeHead != NULL){

		cout << NodeHead->Value << " ";
		NodeHead = NodeHead->NextNode;

	}

}

int main()
{

	node* NodeHead = NULL;

	InsertAtBeginning(NodeHead, 5);
	InsertAtBeginning(NodeHead, 4);
	InsertAtBeginning(NodeHead, 3);
	InsertAtBeginning(NodeHead, 2);
	InsertAtBeginning(NodeHead, 1);

	SpliteLinkedListIntoTwoHalfs(NodeHead);

}
