/*
* 
    For the digit list of the previous exercise, write a function that takes two such
    lists and produces a new list representing their sum.

*/

#include <iostream>
#include <chrono>

using namespace std;

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

        return new stInt{ Number, NULL };

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

int ListToInt(stInt* ListHead) {

    int Number = 0;

    while (ListHead) {

        Number = Number * 10 + ListHead->Value;

        ListHead = ListHead->Next;

    }
    return Number;

}

stInt* sum(stInt* ListHead1, stInt* ListHead2) {

    int List1Number = ListToInt(ListHead1);
    int List2Number = ListToInt(ListHead2);
   
    return IntToList(List1Number + List2Number);

}

int main()
{

    int Number1 = 10, Number2 = 20;

    stInt* List1 = IntToList(Number1);
    stInt* List2 = IntToList(Number2);
    stInt* SumList;

    cout << "List 1: ";
    PrintList(List1);
    cout << "\n\nList 2: ";
    PrintList(List2);

    SumList = sum(List1, List2);

    cout << "\n\nSum of the 2 Lists: ";
    PrintList(SumList);

    return 0;
}
