/*

    Write a program to print Fibonacci Series of 10.

    1   1   2   3   5   8   13   21   34   55

*/

#include <iostream>

using namespace std;

void swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = a;

}

void Fibancie_serise(int& num1,int& num2) {

    int i = num1 + num2;

    cout << i << " ";

    swap(num1, num2);
    num2 = i;

}

void PrintFibancieloop(int number, int num1, int num2) {

    for (int i = 1; i <= number; i++) {

        Fibancie_serise(num1, num2);
    }


}

int main()
{
    
    int prev1 = 1, prev2 = 0;

    PrintFibancieloop(10, prev1, prev2);


    return 0;

}
