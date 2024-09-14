/*

    Write a program to print Sqrt of numbers, don't use built in sqrt function
    
    Input:
    25

    Output:
    My MySqrt Result: 5
    C++ sqrt Result: 5

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

int my_sqrt(int number) {

    return pow(number, 0.5);

}

int main()
{

   int number = read_number("enter a number: ");

    cout << "my sqrt: " << my_sqrt(number) << endl;
    cout << "c++ sqrt: " << sqrt(number) << endl;

    return 0;

}
