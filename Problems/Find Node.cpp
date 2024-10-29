/*

    Make a Function to Find a Node in the Linked List.

*/

#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value)
{

    Node* new_node = new Node();


    new_node->value = value;
    new_node->next = head;


    head = new_node;

}

Node* Find(Node* head, int Value)
{

    while (head != NULL) {

        if (head->value == Value)
            return head;


        head = head->next;
    }

    return NULL;


}

void PrintList(Node* head)

{
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}

int main()
{

    Node* head = NULL;
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    PrintList(head);

    Node* N1 = Find(head, 3);

    if (N1 != NULL)
        cout << "\nNode Found :-)\n";
    else
        cout << "\nNode not found :-(\n";

    system("pause>0");

    return 0;

}