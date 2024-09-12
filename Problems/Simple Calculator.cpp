/*

    Write a program to ask the user to enter:
    • Number1
    • Number 2
    • OperationType
    
    Then perform the calculation according to the Operation Type as follows:
    • “+” : add the two numbers.
    • “-” : Subtract the two numbers.
    • “*” : Multiply the two numbers.
    • “/” : Divide the two numbers.
    
    Example Inputs:
    10
    20
    
    Outputs:
    200

*/

#include <iostream>
using namespace std;

enum oprationtype {add = 1, subtract = 2, multiplu = 3, divide = 4 };

oprationtype read_int_to_enum() {

    int x;
    cin >> x;

    return (oprationtype) x;

}
void read_info(int& num1, int& num2, oprationtype& optp) {

    cout << "what is number[1]: ";
    cin >> num1;

    cout << "what is number[2]: ";
    cin >> num2;

    cout << "what is the opration you want ? \n";
    cout << "(1)add.\n";
    cout << "(2)subtract.\n";
    cout << "(3) multiplu.\n";
    cout << "(4)divide.\n";
    optp =  read_int_to_enum();

}

int calculte_value(int num1, int num2, oprationtype op) {

    if (op == add)
        return num1 + num2; 
    else if (op == subtract)
        return num1 - num2;
    else if (op == multiplu)
        return num1 * num2;
    else 
        return num1 / num2;


}


void print_result(int result) {

    cout << "the result is: " << result << endl;

}



int main()
{
    int num1, num2;
    oprationtype opration;

    read_info(num1,num2,opration);

    print_result(calculte_value(num1, num2, opration));


}
