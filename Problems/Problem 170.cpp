/*

    Write a program to join Array of strings into a one string with separators

    Array after join:
    Mohammed***Faid***Ali***Maher

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinString(vector <string>& vstring, string spareter = " ") {

    string word = "";

    for (string& s : vstring) {

        word += s + spareter;
    }

    return word.substr(0, word.length() - spareter.length());

}

string JoinString(string arrstring[],int arrlenth, string spareter = " ") {

    string word = "";

    for (int i = 0; i < arrlenth; i++) {

        word += arrstring[i] + spareter;

    }

    return word.substr(0, word.length() - spareter.length());

}

int main()
{

    vector <string> v1 = { "mohammad","ahmad","2002","programmig" };

    string arr1[] = { "mohammad","ahmad","2002","programmig" };

    cout << "vector after join:\n";
    cout << JoinString(v1, ",") << "\n\n";

    cout << "array after join:\n";
    cout << JoinString(arr1,4,",#") << endl;


	return 0;
}
