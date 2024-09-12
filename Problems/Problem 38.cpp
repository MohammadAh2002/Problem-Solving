/*

	Write a program to ask the user to enter:
	• First Name
	• Last Name
	Then Print Full Name on screen.

	Example Input:
	Mohammad
	Ahmad
	Output:
	Mohammad Ahmad

*/

#include <iostream>
using namespace std;

struct strinfo {

	string name;
	string last_name;

};

strinfo read_info() {

	strinfo info;

	cout << "what is your name?\n";
	cin >> info.name;

	cout << "what is your last name?\n";
	cin >> info.last_name;


	return info;


}
bool name_reversd() {

	bool namereversd;

	cout << "you want the name in reversed?(true=1/false=0)";
	cin >> namereversd;

	return namereversd;

}
string full_name(strinfo name) {


	string fullname;

	if(name_reversd())
	fullname = name.last_name + " " + name.name;
	else {

		fullname = name.name + " " + name.last_name;

	}
	return fullname;
	

}
void print_name(string name) {

	cout << "your name is: " << name << endl;

}
  
int main()
{
   

	print_name(full_name(read_info()));


}
