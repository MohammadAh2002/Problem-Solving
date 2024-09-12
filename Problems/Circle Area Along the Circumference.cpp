/*

    Write a program to calculate circle area along the circumference, then print it on the screen.
    - Area = L^2 / (4 * PI)
    - PI = 3.14

    The user should enter:
    L
    
    Example Inputs:
    20

    Outputs:
    31.831

*/

#include <iostream>
using namespace std;

int read_l() {

    int l;

    cout << "what is l: ";
    cin >> l;

    return l;

}

float calc_area(int l) {

    float area = pow(l, 2) / (4 * 3.14);

    return area;
}

void print_area(float area) {

    cout << "the area is: " << area << endl;

}

int main()
{

    print_area(calc_area(read_l()));

}
