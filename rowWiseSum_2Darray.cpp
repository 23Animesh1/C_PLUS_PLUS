#include <iostream>
using namespace std;

// Function to print the sum of each row
void PrintSum(int arr[3][4]) {
    cout << "Row wise sum:" << endl;
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int column = 0; column < 4; column++) {
            sum += arr[row][column];
        }
        cout << "Sum of row " << row + 1 << ": " << sum << endl;
    }
}

// Function to print the sum of each column
void columnSum(int arr[3][4]) {
    cout << "Column wise sum:" << endl;
    for (int column = 0; column < 4; column++) {
        int sum = 0;
        for (int row = 0; row < 3; row++) {
            sum += arr[row][column];
        }
        cout << "Sum of column " << column + 1 << ": " << sum << endl;
    }
}

int main() {
    // Create 2D array
    int arr[3][4] = { {1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12} };

    // Print the elements of the array
    cout << "Matrix elements:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    // Print the sum of each row
    PrintSum(arr);

    // Print the sum of each column
    columnSum(arr);

    return 0;
}
