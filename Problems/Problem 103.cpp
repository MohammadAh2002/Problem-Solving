/*

    Write a program to fill array with numbers, then print distinct numbers to another array.

    Output:

    Array 1 elements:
    10 10 10 50 50 70 70 70 70 90

    Array 2 distinct elements:
    10 50 70 90

*/

#include <iostream>

using namespace std;

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

bool check_rpeated_elemnts(int number, int arr[], int arrlenth) {

    for (int i = 0; i <= arrlenth; i++) {

        if (arr[i] == number)
            return true;
    }

    return false;

}

void add_array_elemnts(int number, int arr[], int& arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

}

void copy_array(int arr1[], int arr2[], int arr1lenth, int& arr2lenth) {

    for (int i = 0; i < arr1lenth; i++) {

        if (check_rpeated_elemnts(arr1[i], arr2, arr2lenth))
            continue;
        else
        add_array_elemnts(arr1[i], arr2, arr2lenth);
    }
}


int main()
{
	srand((unsigned)time(NULL));


    int arr1[] = { 10,80,10,50,60,70,80,60,70,90 };

    int arr2[100], arr2lenth = 0;

    copy_array(arr1, arr2, 10, arr2lenth);

    cout << "array 1 is: ";
    print_aray(arr1, 10);

    cout << "array 2 is: ";
    print_aray(arr2, arr2lenth);

    return 0;
}
