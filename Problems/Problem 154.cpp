/*
 
    Write a program to read a string then Print all  Vowels in that String.
    Vowel are: a , e , I , o , u.

    Pleas Enter your string:
    Mohammad Ahmad 2002 Github Programming

    Vowels in string are:
    o a a A a i u o a i

*/

#include <iostream>
#include <string>

using namespace std;

string readstring() {

    string s;

    getline(cin, s);

    return s;
}

bool CheckIfVowels(char c) {

    c = tolower(c);

    return ((c == 'a') || (c == 'i') || (c == 'e')
        || (c == 'u') || (c == 'o'));

}

void HowManyVowels(string s) {

    for (int i = 0; i < s.length(); i++) {

        if (CheckIfVowels(s[i]))
            cout << s[i] << " ";

    }
}

int main()
{
    string s1;

    cout << "what is the string: ";
    s1 = readstring();

    cout << "vowels in the string is: ";

    HowManyVowels(s1);

    return 0;
}
