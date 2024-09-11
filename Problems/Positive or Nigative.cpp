/*
    
    Write a Program That Read 10 Ingers From The User.
    Display Number Of Positive Numbers & Number Of Nigative Numbers

*/

#include <iostream>

using namespace std;

int main()
{
    
    int Number, Positive = 0, Nigative = 0;

    for (int i = 1; i <= 10; i++) {
        
        cout << "\nEnter A number: ";
        cin >> Number;

        if (Number > 0) Positive++;
        if (Number < 0) Nigative++;
    }

    char Response;

    cout << "\n Do you Want the Positive -> (p) or Negative -> (n) Count? :";

    cin >> Response;

    if (Response == 'p')
        cout << "\nPositive Count: " << Positive << endl;
    else
        cout << "\nNigative Count : " << Nigative << endl;

    return 0;
}
