/*

    Write a program to fill array with max size 100 with random numbers from -100 to 100,
    then print the count of Negative numbers.

    Input:
    10

    Output:

    Array Elements:
    -58 -16 -21 -4 -91 82 98 66 -8 -33

    Negative Numbers count is:
    7

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;
    return randNum;

}

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void give_random_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = RandomNumber(-100, 100);
    }
}

int how_many_negative_numbers_is_array(int arr[], int arrlenth) {

    int sum = 0;

    for (int i = 0; i < arrlenth; i++) {

        if (arr[i] < 0)
            sum += 1;

    }

    return sum;

}

int main()
{
    srand((unsigned)time(NULL));

    int arr[10];
    give_random_array_elemnts(arr, 10);
    cout << "array elemnts is: ";
    print_aray(arr, 10);

    cout << "negative numbers count in the array is: ";
    cout << how_many_negative_numbers_is_array(arr, 10);
}
