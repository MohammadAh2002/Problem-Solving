/*

    Write a program to read a text and encrypt it, decrypt it.

    Input: Mohammad

    Output:
    Text Before Encryption: Mohammed
    Text After Encryption: Oqjcoogf
    Text After Decryption: Mohammed

*/

#include <iostream>
#include <string>

using namespace std;

string read_name(string massege) {

    cout << massege;

    string name;
    getline(cin, name);

    return name;

}

string encryption(string name) {

    for (int i = 0; i <= name.length(); i++) {

        name[i] = char(name[i] + 2);
    }
    return name;
}

string decryption(string name) {

    for (int i = 0; i <= name.length(); i++) {

        name[i] = char(name[i] - 2);

    }
    return name;
}

int main()
{
    

    string name = read_name("what is your name: ");

    cout << "the name is: " << name << endl;

    cout << "the name after encryption: " << encryption(name) << endl;

    cout <<"the name after decryption: " << decryption(encryption(name)) << endl;

}
