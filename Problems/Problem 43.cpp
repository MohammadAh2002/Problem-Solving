/*

    Write a program to ask the user to enter his/her:
    • Age
    • Driver license
    Then Print “Hired” if his\her age is grater than 21 and s/he 
    has a driver license, otherwise Print “Rejected”

*/

#include <iostream>
using namespace std;

struct stinfo {

    unsigned short age;
    bool hasdriverlicense;

};

stinfo read_info() {

    stinfo info;

    cout << "what is your age: ";
    cin >> info.age;

    cout << "you have driver license? (true=1/false=0): ";
    cin >> info.hasdriverlicense;

    return info;

}

bool see_if_accpted(stinfo info) {

    return info.age > 21 && info.hasdriverlicense == true;

}

void print_satus(stinfo info) {


    if (see_if_accpted(info) == true) {

        cout << "hired";
    }

    else {

        cout << "not hired";
    }


}


int main()
{
    
    print_satus(read_info());


}
