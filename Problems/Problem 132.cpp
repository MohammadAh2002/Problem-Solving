/*

    Write a program to fill a 3*3 matrix with ordered numbers and print it then transpose matrix and print it

    The following is a 3x3 Ordered matrix :
    1       2       3
    4       5       6
    7       8       9

    The following is the Transposed matrix :
    1       4       7
    2       5       8
    3       6       9

*/

#include <iostream>
#include<iomanip>

using namespace std;

void FillTheMatrix(int matrix[3][3], int rows, int colms) {

    int x = 0;



    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            x++;

            matrix[i][j] = x;

        }
    }
}

void PrintTheMatrix(int matrix[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {

            cout << setw(3) << matrix[i][j] << " ";

        }
        cout << endl;
    }
}

void PrintTheMatrixTranspose(int matrix[3][3], int rows, int colms) {


    for (int i = 0;i < 3; i++) {
        for (int j = 0;j < 3; j++) {

            cout << setw(3) << matrix[j][i] << " ";

        }
        cout << '\n';
    }
}

int main()
{

    int Matrix[3][3];

    FillTheMatrix(Matrix, 3, 3);

    cout << "a Matrix filled with order numbers:\n";
    PrintTheMatrix(Matrix, 3, 3);

    cout << '\n';

    cout << "the matrix transpose:\n";
    PrintTheMatrixTranspose(Matrix, 3, 3);

    return 0;

}
