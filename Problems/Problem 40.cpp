/*

     Write a program to ask the user to enter his/her:
    • Age
    • Driver license
    Then Print “Hired” if his\her age is grater than 21 and s/he 
    has a driver license, otherwise Print “Rejected”

*/

#include <iostream>

using namespace std;

enum ensccpterornot {accpted=1,rejected=2};

int ask_age(unsigned short &age) {


    cout << "what is your age: ";
    cin >> age;

    return age;

}
bool ask_driver_license(bool &dr_lic) {


    cout << "do you have a driver license?(true=1/false=0)\n";
    cin >> dr_lic;

    return dr_lic;


}
ensccpterornot see_if_accpted_or_not(unsigned short age, bool driver_license) {

    if (age > 21 && driver_license == true) {

        return accpted;
    }
    else {

        return rejected;

    }

}
void print_if_accpted(ensccpterornot status) {

    if (status == accpted) {

        cout << "you are in\n";

    }
    else {

        cout << "sorry we cant hire you\n";
    }

}

int main()
{

    unsigned short age;
    bool driver_license;

    ask_age(age);
    ask_driver_license(driver_license);

   print_if_accpted(see_if_accpted_or_not(age,driver_license));
    
}

