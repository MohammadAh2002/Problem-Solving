/*

    Write a program to calculate  circle area circle described around an arbitrary triangle,
    then print it on the screen.
    - Area = PI * ((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))))^2
    - PI = 3.14
    - P = (a + b + c) / 2

    The user should enter:
    a
    b
    C
    
    Example Inputs:
    5
    6
    7

    Outputs:
    40.088

*/

#include <iostream>
#include <cmath>

using namespace std;

void read_abc(float& a, float& b, float& c){

    cout << "what is a: ";
    cin >> a;

    cout << "what is b: ";
    cin >> b;

    cout << "what is c: ";
    cin >> c;


}

float calculte_area(float a, float b, float c){

    float p, area;
    const float PI = 3.14;
        
   p = (a + b + c) / 2;

   area = PI * pow((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))), 2);

   return area;

}

void print_area(float area) {

    cout << "the area is: " << area << endl;

}


int main()
{
    
    float a, b,c;

    read_abc(a,b,c);

    print_area(calculte_area(a,b,c));

}
