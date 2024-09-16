/*

    Write a program to check if a given number exists in matrix or not

    Matrix:
    77       5      12
    22      20       1
     1       0       9

    Enter the number to look for in matrix?
    77

    YES: it is there

*/

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillTheMatrix(int matrix[3][3], int rows, int colms) {


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            matrix[i][j] = RandomNumber(1, 10);

        }
    }
}

void PrintTheMatrix(int matrix[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {

            printf("%0*d    ", 2, matrix[i][j]);

        }

        cout << endl;

    }
}

int ReadNumber() {

    int num;

    cin >> num;

    return num;

}

bool IsNumberInMatrix(int matrix[3][3], int row, int colms, int number) {


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colms; j++) {

            if (matrix[i][j] == number)
                return true;

        }
    }

    return false;

}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3],number;
    int mtx[3][3] = { {0,0,0}, {4,5,0}, {2,0,9} };

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    cout << "what is the number you want to check:";
    number = ReadNumber();

    if (IsNumberInMatrix(matrix, 3, 3,number))
        cout << "yes the number in the matrix.\n";
    else
        cout << "no the number is not in the matrix.\n";

    cout << endl;

    return 0;
}

