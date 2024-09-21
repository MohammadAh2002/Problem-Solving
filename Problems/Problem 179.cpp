/*

	Write a program to ask you to enter clients and save them to File.

	Adding New Client:

	Enter Account Number:
	A150
	Enter PinCode:
	1234
	Enter Name:
	Mohammad Ahmad
	Enter Phone:
	09389838
	Enter Account Balance:
	9000

	Client Added Successfully.
	do you want to add more clients? (1)yes (0)no

	------------------
	Save the Client info in one Line With Sparater Between Data Like This:
	A150#//#1234#//#Mohammad Ahmad#//#079999#//#5270.00000

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct StClientData {

	string AccountNumber, Name, PhoneNumber;
	int PinCode, AccountBalance;

};

StClientData ReadClientData() {

	StClientData ClData;

	cout << "what is the account number: ";
	getline(cin >> ws, ClData.AccountNumber);

	cout << "what is the pin pincode: ";
	cin >> ClData.PinCode;
	cin.ignore(100, '\n');

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

void PutClientDataInFile(string FileName, string s) {

	fstream ClientFile;

	ClientFile.open(FileName, ios::out | ios::app);

	if (ClientFile.is_open()) {
		
			ClientFile << s << endl;

			
	}
	ClientFile.close();
}

void AddClient() {

	StClientData Client;
	string CString;
	bool more;

	do {

		cout << "please enter client data:\n";
		Client = ReadClientData();

		CString = PrintClientDataInLine(Client);

		PutClientDataInFile("ClintsFile", CString);
		cout << "client added successfully.\n";

		cout << "do you want to add more clients?(1)yes(0)no\n";
		cin >> more;

		if (more)
			system("cls");

	} while (more);

}

int main()
{

	AddClient();

	return 0;
}
