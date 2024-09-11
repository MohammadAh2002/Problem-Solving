/*

    Following up on the previous exercise, implement the concatenate function.
    Note that if we make a call concatenate(s1, s2), where both parameters are
    pointers to the first nodes of their respective linked lists, the function should
    create a copy of each of the nodes in s2 and append them to the end of s1.
    That is, the function should not simply point the next field of the last node in
    s1’s list to the first node of s2’s list.

*/

#include <iostream>

using namespace std;

struct stString
{

    char Value;
    stString* Next;

};

bool Append(stString*& ListHead, char Value) {

    stString* NewNode = new stString;
    NewNode->Value = Value;
    NewNode->Next = NULL;

    if (!ListHead) {

        ListHead = NewNode;
        return true;

    }

    stString* Current = ListHead;

    while (Current->Next) {

        Current = Current->Next;

    }

    Current->Next = NewNode;

    return true;
}

void PrintList(stString* ListHead) {

    stString* Current = ListHead;

    while (Current)
    {
        cout << Current->Value;
        Current = Current->Next;
    }

}

void Concatenate(stString*& ListHead1, stString* ListHead2) {

    while (ListHead2) {

        Append(ListHead1, ListHead2->Value);
        ListHead2 = ListHead2->Next;

    }

}

int main()
{

    // List 1
    stString* ListHead1 = NULL;
   
    stString* List1Char1 = new stString;
    stString* List1Char2 = new stString;

    List1Char1->Value = 'H';
    List1Char2->Value = 'i';

    ListHead1 = List1Char1;
    List1Char1->Next = List1Char2;
    List1Char2->Next = NULL;

    // List 2
    stString* ListHead2 = NULL;

    stString* List2Char1 = new stString;
    stString* List2Char2 = new stString;
    stString* List2Char3 = new stString;
    stString* List2Char4 = new stString;

    List2Char1->Value = 'N';
    List2Char2->Value = 'i';
    List2Char3->Value = 'c';
    List2Char4->Value = 'e';

    ListHead2 = List2Char1;
    List2Char1->Next = List2Char2;
    List2Char2->Next = List2Char3;
    List2Char3->Next = List2Char4;
    List2Char4->Next = NULL;

    cout << "List 1: ";
    PrintList(ListHead1);

    cout << "\n\nList 2: ";
    PrintList(ListHead2);

    Concatenate(ListHead1, ListHead2);
    
    cout << "\n\nList 1 After Concatenate: ";
    PrintList(ListHead1);

    return 0;
}
