/*

	Write a program to read Bank client Data Record and Convert it to one line.
	Use Sparater -> #//# Between the Client Data.

	Please Enter Client Data:

	Enter Account Numbe:
	A150
	
	Enter PinCode:
	1234
	
	Enter Name:
	Mohammad Ahmad
	
	Enter Phone:
	079939999
	
	Enter Account Balance:
	5000

	Client Record for Saving is:
	A150#//#1234#//#Mohammad Ahmad#//#079939999#//#5000

*/

#include <iostream>
#include <string>

using namespace std;

struct StClientData {

	string AccountNumber, Name, PhoneNumber;
	int PinCode, AccountBalance;

};

StClientData ReadClientData() {

	StClientData ClData;

	cout << "what is the account number: ";
	getline(cin, ClData.AccountNumber);

	cout << "what is the pin pincode: ";
	cin >> ClData.PinCode;

	cin.ignore(100,'\n');

	cout << "what is the name: ";
	getline(cin, ClData.Name);

	cout << "what is the phone number: ";
	getline(cin, ClData.PhoneNumber);

	cout << "what is the account balance: ";
	cin >> ClData.AccountBalance;

	return ClData;

}

string PrintClientDataInLine(StClientData ClData, string Sparater = "#//#") {

		string word;

		word += ClData.AccountNumber + Sparater;
		word += to_string(ClData.PinCode) + Sparater;
		word += ClData.Name + Sparater;
		word += ClData.PhoneNumber + Sparater;
		word += to_string(ClData.AccountBalance);

		return word;

}

int main()
{

	StClientData Client;

	cout << "please enter client data:\n";
	Client = ReadClientData();

	cout << "client record for saving is:\n";
	cout << PrintClientDataInLine(Client) << endl;


	return 0;
}
