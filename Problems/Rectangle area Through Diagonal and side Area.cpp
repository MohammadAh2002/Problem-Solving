/*

    Write a program to calculate rectangle area through diagonal and side area of
    rectangle and print it on the screen.
    - Area = a * sqrt(d^2 - a^2) 

    The user should enter:
    a
    d
    
    Example Inputs:
    5
    40

    Outputs:
    198.431

*/

#include <iostream>
#include <cmath>

using namespace std;

void read(int &a,int &b) {

    cout << "what is a: ";
    cin >> a;

    cout << "what is b:";
    cin >> b;
    cout << endl;



}
float calculate_rec_area(int a, int b) {

    return a * (sqrt(pow(b,2) - pow(a,2)));
}
void print_rea_area(float area) {

    cout << "rectangel area is: " << area << endl;


}
int main()
{
    
    int a, b;

    read(a,b);

    calculate_rec_area(a,b);
    print_rea_area(calculate_rec_area(a,b));



}
