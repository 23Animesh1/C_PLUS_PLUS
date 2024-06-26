#include <iostream>
using namespace std;

// Swap function should take references
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Selection Sort function
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        int value = 0;
        cin >> value;
        arr[i] = value;
    }

    selectionSort(arr, n);

    cout << "The provided array after sorting is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << " " << arr[j];
    }

    return 0;
}
