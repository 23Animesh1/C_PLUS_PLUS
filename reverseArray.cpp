#include <iostream>
using namespace std;

void swap(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Call the reverse function
    reverse(arr, size);

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
