/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy it to another array and print it.

    Input:
    10

    Output:

    Array 1 elements:
    1 47 51 18 85 62 51 61 82 4

    Array 2 elements after copy:
    1 47 51 18 85 62 51 61 82 4

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;
    return randNum;

}

void give_random_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = RandomNumber(1, 100);
    }
}

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void copy_array_elemnts(int arr[], int arr2[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr2[i] = arr[i];

    }

}

int main()
{
    srand((unsigned)time(NULL));

    int arrlenth = read_number("enter the lenth of the array: ");

    int arr[100], arr2[100];

    give_random_array_elemnts(arr, arrlenth);

    cout << "elemnts of array[1]: ";
    print_aray(arr, arrlenth);
   
    copy_array_elemnts(arr, arr2, arrlenth);

    cout << "elemnts of array[2]: ";
    print_aray(arr2, arrlenth);

    return 0;

}
