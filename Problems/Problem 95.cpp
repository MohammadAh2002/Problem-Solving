/*

    Write a program to print Floor of numbers, don't use built in Floor function

    Input 1:
    10.7
    My Floor Result: 10
    C++ Floor Result: 10

    Input 2:
    10.3
    My Floor Result: 10
    C++ Floor Result: 10

    Input 3:
    -10.3
    My Floor Result: -11
    C++ Floor: -11

*/

#include <iostream>
using namespace std;

float read_number(string massege) {

    cout << massege;

    float number;
    cin >> number;

    return number;

}

int my_floor(float number) {

    int main_part = int(number);

    if (number > 0)
        return main_part;
    else
        return --main_part;

}

int main()
{

    float number = read_number("enter a number: ");

    cout << "my floor: " << my_floor(number) << endl;
    cout << "c++ floor: " << floor(number) << endl;

    return 0;

}
