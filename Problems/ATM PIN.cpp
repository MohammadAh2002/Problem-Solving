/*

	Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234,
	then show the balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
	
	NoteL Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
	
	Assume User Balance is 7500.
	
	Input:
	1234
	5151

	Outputs:
	Your Balance is: 7500
	Wrong PIN

*/

#include <iostream>
using namespace std;

string readpincode() {

	cout << "what is your pin: ";

	string pin;
	cin >> pin;

	return pin;
}
bool check_pin() {


	for (int i = 3; i >= 1; i--) {

		string pin = readpincode();

		if (pin == "1234")
			return true;
		else {

			system("color 4f");
			cout << "wrong pin you have " << i -1 << " more tries\n";
			
		}
	}
	return false;

}


int main()
{


	if (check_pin()) {

		system("color 2f");
		cout << "your balnce is: 7500\n";
	}
	else
		cout << "you card has been bloced call the bank";


}

