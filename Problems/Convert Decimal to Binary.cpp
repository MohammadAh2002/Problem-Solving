/*

     Convert Decimal Number to Binary.

*/

#include <iostream>

using namespace std;

int DecimalToBinary(int Number) {

    int Result = 0, Power = 1;

    while (Number != 0) {

        Result += Number % 2 * Power;
        Number = Number / 2;
        Power *= 10;

    }

    return Result;

}

int main()
{

    cout << "Converting a Number From Decimal to Binary" << DecimalToBinary(14);

    return 0;
}
