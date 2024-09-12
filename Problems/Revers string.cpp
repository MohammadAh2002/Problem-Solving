/*

    Reverse a String.

*/

#include <iostream>

using namespace std;

void ReversString(string& str) {

    string* str2 = new string;

    for (int i = str.size(); i >= 0; i--) {

        str2->push_back(str[i]);

    }

    str = *str2;

    delete str2;

}


int main()
{
    
    string word = "mohammad ahmad 2022";

    ReversString(word);

    cout << word << endl;

    return 0;
}
