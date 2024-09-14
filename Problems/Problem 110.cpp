/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy it to another array in reverse order and print it.

    Input:
    10

    Output:

    Array 1 elements:
    64 8 62 19 2 21 15 74 96 85

    Array 2 elements after copying array 1 in reversed order:
    85 96 74 15 21 2 19 62 8 64

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

void give_random_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = RandomNumber(1, 100);
    }
}

void swap(int& a, int& b) {

    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

void revers_array(int arr[], int arr2[], int arrlenth) {

    int counter = arrlenth;

    for (int i = 0; i < arrlenth; i++) {

        swap(arr[i], arr2[counter-1]);
        counter--;
    }
    
}

int main()
{
    srand((unsigned)time(NULL));

    int lenth = read_number("enter the array lenth: ");
    int arr[100];
    give_random_array_elemnts(arr, lenth);

    cout << "\narray 1 elemnts is:\n";
    print_aray(arr, lenth);

    int arr2[100];

    revers_array(arr,arr2,lenth);

    cout << "\narray 2 after revers array 1:\n";
    print_aray(arr2, lenth);

}
