/*

    Write a program to print the intersected numbers in two given matrices

    Matrix 1:
    77       5      12
    22      20       1
     1       0       9

    Matrix 2:
     5      80      90
    22      77       1
    10       8      33

    Intersected Numbers are :
    77 - 5 - 22 - 1 - 1

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

            matrix[i][j] = RandomNumber(1, 100);

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

void PrintRpeatedElemnts(int matrix[3][3], int matrix2[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            for (int n = 0; n < rows; n++) {
                for (int m = 0; m < colms; m++) {

                    if (matrix[i][j] == matrix2[n][m]) {

                        cout << matrix[i][j] << " ";
                        break;
                    }
                }
            }
        }
    }
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

    cout << "intersected number are:\n";
    PrintRpeatedElemnts(matrix, matrix2, 3, 3);


    return 0;
}

