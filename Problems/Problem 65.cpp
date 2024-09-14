/*

	Write a program to guess a 3-Letter Password (all capital)

	Input:
	AAF

	Output:
	Trial [1]: AAA
	Trial [2]: AAB
	Trial [3]: AAC
	Trial [4]: AAD
	Trial [5]: AAE
	Trial [6]: AAF

	Password is AAF
	Found after 6 Trial(s)

*/

#include <iostream>
#include <string>
using namespace std;


string read_pass() {

	cout << "what is the passord: ";

	string pass;
	getline(cin,pass);

	return pass;
}

bool check_passowrd(string pass) {

	int total_attmps = 0;
	string word;

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int n = 65; n <= 90; n++) {

				word = "";

				word = word + char(i);
				word = word + char(j);
				word = word + char(n);

				total_attmps += 1;

				cout << "try number[" << total_attmps << "]: " << word << endl;

				if (word == pass) {

					cout << "\nthe password is: " << word << endl;
					cout << "found after [" << total_attmps << "] try" << endl;
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{

	check_passowrd(read_pass());

	return 0;

}
