/*

	Sum of factorials of Prime numbers in a Linked list.

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

bool CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return false;
	}
	return true;
}

int CalcolateFctorial(int Number) {

	int fact = 1;

	for (int i = 1; i <= Number; i++) {

		fact *= i;

	}

	return fact;

}

int SumoffactorialsofPrime(Node* NodeHead) {

	int sum = 0;

	while (NodeHead != NULL) {

		if (CheckPrime(NodeHead->Value)) {

			sum += CalcolateFctorial(NodeHead->Value);

		}

		NodeHead = NodeHead->NextNode;

	}

	return sum;

}

int main()
{

	Node* Node1 = NULL;

	InsertAtBeginning(Node1, 5);
	InsertAtBeginning(Node1, 4);
	InsertAtBeginning(Node1, 7);

	cout << "\nthe list before:\n";
	PrintLinkedList(Node1);

	int sum = SumoffactorialsofPrime(Node1);

	cout << "Sum of factorials of Prime numbers in a Linked list is :"
		<< sum << '\n';

	return 0;

}