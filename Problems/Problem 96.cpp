/*

    Write a program to print round of numbers, don't use built in round function

    Input 1:
    10.7
    My Round Result: 11
    C++ Round Result: 11

    Input 2:
    10.3
    My Round Result: 10
    C++ Round Result: 10

    Input 3:
    -10.7
    My Round Result: -11
    C++ Round Result: -11

*/

#include <iostream>

using namespace std;

float read_number(string massege) {

    cout << massege;

   float number;
    cin >> number;

    return number;

}

float getfraction(float number) {

    return number - int(number);

}

int my_round(float number) {

    int main_part = int(number);
    float fraction_part = getfraction(number);

    if (abs(fraction_part) >= .5) {

        if (number > 0)
            return ++main_part;
        else
            return --main_part;

    }
    else
    {
        return main_part;
    }

}

int main()
{
    
    float number = read_number("enter a number: ");

    cout << "my round: " << my_round(number) << endl;
    cout << "c++ round: " << round(number) << endl;


}
