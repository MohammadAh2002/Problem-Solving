/*

	Read a String from the User and then Reverse it.

*/

#include <iostream>
#include <string>
using namespace std;

string read_string() {

	cout << "this programe take a string and print it in revers";
	cout << "enter a string: ";

	string revstring;
	getline(cin, revstring);

	return revstring;

}

void revers_string(string revstring) {

	int i = revstring.length();

	do {
	
		cout << revstring[i];
		i--;
		
	} while (i >= 0);

}


int main()
{
   
	revers_string(read_string());

}
