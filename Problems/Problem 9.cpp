/*

    Imagine a linked list where instead of the node storing a character, the node
    stores a digit: an int in the range 0–9. We could represent positive numbers
    of any size using such a linked list; the number 149, for example, would be a
    linked list in which the first node stores a 1, the second a 4, and the third and
    last a 9. Write a function intToList that takes an integer value and produces a
    linked list of this sort. Hint: You may find it easier to build the linked list
    backward, so if the value were 149, you would create the 9 node first.

*/

#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

struct stInt {

    int Value;

    stInt* Next;

};

void PrintList(stInt* ListHead) {

    stInt* Current = ListHead;

    while (Current)
    {
        cout << Current->Value;
        Current = Current->Next;
    }

}

stInt* IntToList(int Number) {

    short remainder;

    if (Number == 0) {

        return new stInt { Number, NULL };

    }
    
    remainder = Number % 10;

    stInt* Current = new stInt;
    Current->Value = remainder;
    Current->Next = NULL;

    stInt* ToCurrent = Current;
    
    Number /= 10;

    while (Number != 0) {

        ToCurrent = new stInt;
        ToCurrent->Next = Current;

        remainder = Number % 10;    
        Current = ToCurrent;
        Current->Value = remainder;

        Number /= 10;
    }

    return ToCurrent;

}


int main()
{

    int Number = 1234;

    stInt* List = IntToList(Number);

    PrintList(List);

    return 0;
}
