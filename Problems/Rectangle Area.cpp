/*

    Write a program to calculate rectangle area and print it on the screen.
    - Area = a * b

    Example Inputs:
    10
    20

    Outputs:
    200

*/

#include <iostream>
using namespace std;


void read_talls(int& a, int& h) {

    cout << "what is a?\n";
    cin >> a;

    cout << "what is h?\n";
    cin >> h;


}
int calculate_rec_area(int a, int h) {
    return a * h;
}
void print_the_rec_are(int rec_area) {

    cout << "the rectangle area is : " << rec_area << endl;



}

int main()
{
    int h, a;
    float rec_area;


    read_talls(a, h);
    print_the_rec_are(calculate_rec_area(a, h));

}
