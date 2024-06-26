#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j;

        // Find the correct position for temp
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = temp;
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

    insertionSort(arr, n);

    cout << "The provided array after sorting is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << " " << arr[j];
    }

    return 0;
}
