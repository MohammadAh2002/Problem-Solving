/*

    Write a program to read a string then Count all  Vowels in that String.
    Vowel are: a , e , I , o , u.

    Pleas Enter your string:
    Mohammad Ahmad 2002 Github Programming

    Number of vowels is:
    10

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

int HowManyVowels(string s) {

    int count = 0;

    for (int i = 0; i < s.length(); i++) {

        if (CheckIfVowels(s[i]))
            count++;

    }

    return count;

}

int main()
{
    string s1;

    cout << "what is the string: ";
    s1 = readstring();

    cout << "number of vowels in the string is: " << HowManyVowels(s1) << endl;

    return 0;
}
