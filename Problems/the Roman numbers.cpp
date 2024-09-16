/*

    Write a Program to Convert Roman Numbers to Decimal Numbers.

*/

#include <iostream>

using namespace std;

int main()
{

    int number = 1;
 

    while (number >= 0) {

        cout << "entar a number to print it in the roman way: ";
        cin >> number;

        while (number > 0){

            if (number < 10) {

                switch (number) {

                case 1:
                case 2:
                case 3:
                    cout << "I";
                    number -= 1;
                    break;
                case 4:
                    cout << "IV";
                    number -= 4;
                    break;
                case 5:
                case 6:
                case 7:
                case 8:
                    cout << "V";
                    number -= 5;
                    break;
                case 9:
                    cout << "IX";
                    number -= 9;
                    break;
                }
            }
            else if (number >= 10 && number <= 49) {

                cout << "X";
                number -= 10;
            }
            else if (number >= 50 && number <= 99) {

                cout << "L";
                number -= 50;

            }
            else {

                cout << "C";
                number -= 100;

            }

        }

        cout << endl;

    } 

    return 0;

}
