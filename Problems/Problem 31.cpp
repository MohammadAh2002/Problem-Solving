/*

	Write a program to ask the user to enter:
	• Mark
	Then Print the “PASS” if mark >=50, otherwise print “Fail”
	
	Example Inputs:
	45
	
	Outputs:
	Fail

*/

#include <iostream>
using namespace std;

enum enpafa { pass = 1, fail = 2 };

int read_mark() {

	int mark;

	cout << "what is your mark: ";
	cin >> mark;

	return mark;

}
enpafa check_status() {

	if (read_mark() >= 55)
		return enpafa::pass;
	else
		return enpafa::fail;


}
void print_status(enpafa mark) {

	if (mark == enpafa::pass)
		cout << "you passed the exam";
	else
		cout << "you fail in the exam";

}

int main()
{


	print_status(check_status());



	return 0;

}