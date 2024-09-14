/*

    Write a program to print abs of numbers, don't use built in abs function

    Input:
    -10

    Output:

    My abs Result:
    10

    C++ abs Result:
    10

*/

#include <iostream>
#include <cmath>
using namespace std;

int myabs(int number) {

    if(number < 0)
    return number * -1;
    else
    return number;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "my abs result is: " << myabs(number) << endl;
    cout << "c++ abs result is: " << abs(number) << endl;

}
