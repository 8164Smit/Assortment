#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int arr[100][100];

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter elements of the array:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int largest = arr[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << "Largest element in the 2D array is: " << largest << endl;
    return 0;
}