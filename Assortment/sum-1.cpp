#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the array's size: ";
    cin >> size;

    int a[size];
    cout << "Enter array's elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "Negative elements are:\n";
    for(int i = 0; i < size; i++) {
        if(a[i] < 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}