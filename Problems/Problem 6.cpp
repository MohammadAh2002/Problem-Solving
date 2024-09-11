/*
*
    Let’s create an implementation for strings that uses a linked list of characters
    instead of dynamically allocated arrays. So we’ll have a linked list where the
    data payload is a single char; this will allow strings to grow without having to re
    create the entire string. We’ll start by implementing the append and characterAt
    functions.

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

    while(Current->Next){
    
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

char CharacterAt(stString*& ListHead, int Index) {

    int Count = 0;

    if (!ListHead) {

        return true;

    }

    stString* Current = ListHead;

    while (Count != Index && Current->Next != NULL) {

        Current = Current->Next;
        Count++;
    }

    return Current->Value;

}

int main()
{
    
    stString* ListHead = NULL;

    stString* Char1 = new stString;
    stString* Char2 = new stString;

    Char1->Value = 'H';
    Char2->Value = 'i';

    ListHead = Char1;
    Char1->Next = Char2;
    Char2->Next = NULL;

    Append(ListHead,'!');

    PrintList(ListHead);

    cout << CharacterAt(ListHead,1);

    return 0;
}
