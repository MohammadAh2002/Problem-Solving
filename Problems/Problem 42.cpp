/*

	Write a program to ask the use to enter his/her name and print it on screen.

*/

#include <iostream>
#include <string>

using namespace std;

string read_name() {

	string name;
	cout << "what is your name?\n";
	getline(cin, name);
	return name;
}


void print_name(string name) {

	cout << "your name is: " << name << endl;

}

int main()
{
   
	print_name(read_name());

	return 0;

}
