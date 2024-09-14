/*

    Write a program print all prime numbers from 1 to N.

    Input:
    10

    Output:
    1
    2
    3
    5
    7

*/

#include <iostream>
#include <cmath>
using namespace std;

enum enprimenumber {prime = 1, notprime = 2 };

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

enprimenumber checkprime(int number) {

    int M = round(number / 2); 

    for (int Counter = 2; Counter <= M; Counter++) {
        if (number % Counter == 0)
         return    enprimenumber::notprime;
    }  

    return enprimenumber::prime;

}

void printprimenumsfrom1to10(int number) {

    cout << "the prime number from 1 to " << number << " is:\n";

    for (int i = 1; i <= number; i++) {

        if (checkprime(i) == enprimenumber::prime)
            cout << i << endl;
        else 
            continue;
    }
}

int main()
{
    
    int number = read_number("the number is: ");

    printprimenumsfrom1to10(number);

    return 0;

}
