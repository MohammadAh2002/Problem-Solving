/*

    Write a program to print Fibonacci Series of 10 Using Recursion.

    1   1   2   3   5   8   13   21   34   55

*/

#include <iostream>

using namespace std;

void FibonacciRecsive(int number, int num1, int num2) {
    
    int fibnum = 0;

    if (number > 0) {

        fibnum = num1 + num2;
        num1 = num2;
        num2 = fibnum;
        cout << fibnum << "  ";

        FibonacciRecsive(number - 1,num1,num2);
    }
                                   
}

int main()
{
   
    FibonacciRecsive(10, 0, 1);


    return 0;

}
