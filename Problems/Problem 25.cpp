/*

	Write a program to ask the user to enter:
	• Age
	If age is between 18 and 45 print “Valid Age” otherwise print
	“Invalid Age” and re-ask user to enter a valid age.

	Note: You should keep asking user to enter a valid age until s/she enters it

*/

#include <iostream>
using namespace std;

int read_age() {

	int age;

	cout << "what is your age?\n";
	cin >> age;

	return age;
}

int check_age() {

	int age;

	do {

		age = read_age();

	} while (age <= 18 || age >= 45);

	return age;
}

void print_age(int age) {


	cout << "your age is: " << age << endl;

}

 

int main()
{
  
	print_age(check_age());


}
