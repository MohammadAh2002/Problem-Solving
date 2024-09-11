/*

    Convert Binary Number to Decimal

*/

#include <iostream>
#include <cmath>

using namespace std;

int GetLastDigit(int Number) {

    return Number % 10;

}

int BinaryToDecimal(int Number) {

    int Result = 0, Track = 0;

    while(Number != 0){

        if (GetLastDigit(Number) == 1) {

            Result += pow(2, Track);

        }

        Track++;
        Number /= 10;

    }

    return Result;

}

int main()
{
    
    int Number;

    cout << "Enter a Number in Binary:";
    cin >> Number;

    cout << BinaryToDecimal(Number);

    return 0;

}
