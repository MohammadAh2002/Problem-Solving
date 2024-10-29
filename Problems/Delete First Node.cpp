/*

    Make a Function to Delete the First Node From the Linked List.

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

void DeleteFirstNode(Node*& head) {

    Node* Current = head;

    if (head == NULL)
    {
        return;
    }

    head = Current->next;
    delete Current;//free from memory
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
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 6);
    PrintList(head);

    DeleteFirstNode(head);

    PrintList(head);

    system("pause>0");

    return 0;

}