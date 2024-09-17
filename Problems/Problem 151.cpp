/*

    Write a program to read a string and read character,
    then count the character in that string (Match Case or Not)

    Pleas Enter your string:
    Mohammad Ahmad Github 2002 Programming

    Pleas Enter a Character:
    m

    Letter 'm' count = 5
    Letter  'm' or 'M'  Count = 6

*/

#include <iostream>
#include <string>
using namespace std;

string ReadString() {

    string s1;

    getline(cin, s1);

    return s1;
}

int HowMnayTimeRpeated(string s1, char c1, bool matchcase = true) {

    int count = 0;

    for (int i = 0; i < s1.length(); i++) {
      
        if (matchcase) {

            if (s1[i] == c1)
                count++;
        }
        else {

            if (tolower(s1[i]) == tolower(c1))
                count++;


        }
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

    printf("latter %c rpeated in the string %d times.\n", C1, HowMnayTimeRpeated(S1, C1));
    printf("latter %c  or %c rpeated in the string %d times.\n", tolower(C1),toupper(C1), HowMnayTimeRpeated(S1, C1,false));

    return 0;
}
