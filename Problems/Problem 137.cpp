/*

    Write a program to compare two matrices and check if they are equal or not

    Matrix 1:
    07   03   06
    09   02   08
    04   04   10

    Matrix 2:
    06   07   03
    09   09   04
    06   03   04

    No: Matrices are NOT equal

*/

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

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

int MatrixElmentsSum(int matrix[3][3], int rows, int colms) {

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            sum += matrix[i][j];

        }
    }

    return sum;
}

bool CheckIfMatricesIsEqual(int matrix[3][3], int matrix2[3][3], int rows, int colms) {

    return (MatrixElmentsSum(matrix, rows, colms) == MatrixElmentsSum(matrix2, rows, colms));
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3], matrix2[3][3];

    FillTheMatrix(matrix, 3, 3);
    FillTheMatrix(matrix2, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    cout << "matrix2:\n";
    PrintTheMatrix(matrix2, 3, 3);

    if (CheckIfMatricesIsEqual(matrix, matrix2, 3, 3))
        printf("yes: they are equal.\n");
    else
        printf("no: they are not equal.\n");

    cout << endl;

    return 0;
}

