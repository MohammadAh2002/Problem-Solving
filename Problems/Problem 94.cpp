/*

    Write a program to print ceil of numbers, don't use built in ceil function

    Input 1:
    10.7
    My ceil Result: 11
    C++ ceil Result: 11

    Input 2:
    -10.7
    My ceil Result: -10
    C++ ceil: -10

*/

#include <iostream>
using namespace std;

float read_number(string massege) {

    cout << massege;

    float number;
    cin >> number;

    return number;

}

float GetFractionPart(float Number) {

    return Number - int(Number);

}

int MyCeil(float Number) {

    if (abs(GetFractionPart(Number)) > 0) {

        if (Number > 0)
            return int(Number) + 1;

        else return int(Number);
    
    }

    else return Number;

}

int main()
{

    float number = read_number("enter a number: ");

    cout << "my ceil: " << MyCeil(number) << endl;
    cout << "c++ ceil: " << ceil(number) << endl;

    return 0;

}
