/*

    Add a function to the linked-list string implementation called removeChars to
    remove a section of characters from a string based on the position and length.
    For example, removeChars(s1, 5, 3) would remove the three characters starting
    at the fifth character in the string. Make sure the removed nodes are properly
    deallocated.

*/

#include <iostream>

using namespace std;

struct stString
{

    char Value;
    stString* Next;

};

void PrintList(stString* ListHead) {

    stString* Current = ListHead;

    while (Current)
    {
        cout << Current->Value;
        Current = Current->Next;
    }

}

void RemoveChars(stString* ListHead, int StartIndex, int Length) {

    stString* StartNode = ListHead;
    stString* PrevioseNode = NULL;

    int count = 0;

    while(count != StartIndex) {

        PrevioseNode = StartNode;
        StartNode = StartNode->Next;
        count++;

    }
   
    count = 1;

    while (count <= Length) {

        PrevioseNode->Next = StartNode->Next;

        delete StartNode;

        StartNode = PrevioseNode->Next;

        count++;

    }


}

int main()
{

    // List 1
    stString* ListHead = NULL;

    stString* Char1 = new stString;
    stString* Char2 = new stString;
    stString* Char3 = new stString;
    stString* Char4 = new stString;
    stString* Char5 = new stString;
    stString* Char6 = new stString;
    stString* Char7 = new stString;

    Char1->Value = 'H';
    Char2->Value = 'i';
    Char3->Value = ' ';
    Char4->Value = 'N';
    Char5->Value = 'i';
    Char6->Value = 'c';
    Char7->Value = 'e';

    ListHead = Char1;
    Char1->Next = Char2;
    Char2->Next = Char3;
    Char3->Next = Char4;
    Char4->Next = Char5;
    Char5->Next = Char6;
    Char6->Next = Char7;
    Char7->Next = NULL;

    cout << "List 1: ";
    PrintList(ListHead);

    RemoveChars(ListHead,2,1);

    cout << "\n\nList 1 After Concatenate: ";
    PrintList(ListHead);

    return 0;
     
}
