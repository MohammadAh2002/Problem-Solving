
/*

    you have 3 Digits Lock 
    every Digit place has 10 possibilities from 0 To 9
    write a Program the Show Us All the possibilities The Lock Could Have
    ____________________
    | [ 0 ] [ 0 ] [ 0 ]|
    --------------------

*/

#include <iostream>

using namespace std;

int main()
{
    
    for (int LeftDigit = 0; LeftDigit < 10; LeftDigit++) {

        for (int MiddleDigit = 0; MiddleDigit < 10; MiddleDigit++) {

            for (int RightDigit = 0; RightDigit < 10; RightDigit++) {

                cout << LeftDigit << "-" << MiddleDigit << "-" << RightDigit << "\n";

            }
        }

    }

    return 0;

}
