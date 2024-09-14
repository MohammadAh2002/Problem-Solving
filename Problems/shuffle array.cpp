/*

    Write a program to fill array with ordered numbers from 1 to N, then print it,
    after that shuffle this array and print it after shuffle.

    Input:
    10

    Output:

    Array elements before shuffle:
    1 2 3 4 5 6 7 8 9 10

    Array elements after shuffle:
    2 4 6 3 10 1 7 8 5 9

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

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void fill_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = i + 1;

    }
}

void swap(int& a, int& b) {

    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

void shuflle_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        swap(arr[RandomNumber(1, arrlenth) - 1],
            arr[RandomNumber(1, arrlenth) - 1]);
         }
    }


int main()
{
    srand((unsigned)time(NULL));


    int arrlenth = read_number("what is the lenth of the array: ");

    int arr[100];
    fill_array_elemnts(arr, arrlenth);

    cout << "array elemnts before shuffle: ";
    print_aray(arr, arrlenth);

    shuflle_array_elemnts(arr, arrlenth);

    cout << "array elemnts after shuffle: ";
    print_aray(arr, arrlenth);
}
