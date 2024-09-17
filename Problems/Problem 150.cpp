/*

    Write a program to read a string and read character then count the  character in that string.

    Pleas Enter your string:
    Mohammad Ahmad

    Pleas Enter a Character:
    m

    Letter 'm' count = 4

*/

#include <iostream>
#include <string>
using namespace std;

string ReadString() {

    string s1;

    getline(cin, s1);

    return s1;
}

int HowMnayTimeRpeated(string s1, char c1) {

    int count = 0;

    for (int i = 0; i < s1.length(); i++) {

        if (s1[i] == c1)
            count++;

    }

    return count;

}

int main()
{

    string S1;
    char C1;


    cout << "what is your string: ";
    S1 = ReadString();

    cout << "what is the charater: ";
    cin >> C1;

    printf("latter %c rpeated in the string %d times.\n", C1, HowMnayTimeRpeated(S1,C1));


    return 0;
}
