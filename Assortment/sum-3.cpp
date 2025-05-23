#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int a[row][col], transp[col][row];

    cout << "Enter elements of the array:" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            transp[j][i] = a[i][j];
        }
    }

    cout << "Transpose of the array:" << endl;
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << transp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}