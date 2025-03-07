#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {  // Fix here
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort(arr, n);

    cout << "The provided array after sorting is:" << endl;
    for (int j = 0; j < n; j++) {
        cout << " " << arr[j];
    }

    return 0;
}
