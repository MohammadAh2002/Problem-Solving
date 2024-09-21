/*

    Write a program to Replace words in string using Custom function.

    Original String:
    Welcome to Palestine, Palestine is a nice country

    Replace with Match Case:
    Welcome to Palestine, Palestine is a nice country

    Replace with don't Match Case:
    Welcome to USA, USA is a nice country

*/

#include <iostream>
#include <string>
using namespace std;

string StringToLower(string s) {

    string news;

    for (int i = 0; i < s.length(); i++) {

        news += tolower(s[i]);

    }

    return news;

}

string ReplaceWrods(string s, string OriginalWord, string SpartedWord, bool matchcase = true) {

    int pos = 0;
    string NewString = "";

    if (!matchcase) {
        s = StringToLower(s);
        OriginalWord = StringToLower(OriginalWord);
    }

    while ((pos = s.find(OriginalWord)) != string::npos) {

        NewString += s.substr(0, pos) + SpartedWord;

        s = s.erase(0, pos + OriginalWord.length());

    }
    if (s != "")
        NewString += s;

    return NewString;

}

int main()
{
    
    string S = "welcome to palstine, Palstine is a nice country";

    cout << "original string:\n" << S << endl;
    cout << ReplaceWrods(S, "palstine", "USA", false) << endl;

    return 0;
}
