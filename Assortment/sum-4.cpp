#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    cout << "Enter a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int row, rowsum = 0;
    cout << "Enter row number between 0-2: ";
    cin >> row;

    for (int j = 0; j < 3; j++) {
        rowsum = rowsum + a[row][j];
    }
    cout << "Sum of row " << row << ": " << rowsum << endl;

    int col, colsum = 0;
    cout << "Enter column number between 0-2: ";
    cin >> col;

    for (int i = 0; i < 3; i++) {
        colsum = colsum + a[i][col];
    }
    cout << "Sum of column " << col << ": " << colsum << endl;

    return 0;
}