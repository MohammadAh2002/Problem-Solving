/*

    Make a Function to Insert At End of the Linked List.

*/

#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

void InsertAtEnd(Node*& head, int Value) {

    Node* new_node = new Node();

    new_node->value = Value;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return;
    }

    Node* LastNode = head;
    while (LastNode->next != NULL)
    {
        LastNode = LastNode->next;
    }

    LastNode->next = new_node;
    return;
}

void PrintList(Node* head)

{
    cout << "\n";
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}

int main()
{
    Node* head = NULL;

    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 0);

    PrintList(head);

    system("pause>0");

}