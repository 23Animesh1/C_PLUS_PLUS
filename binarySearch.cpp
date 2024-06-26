#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int even[6] = {1, 2, 34, 67, 73, 76};
    int odd[5] = {3, 24, 57, 77, 97};

    int result = binarySearch(even, 6, 2);
    if (result != -1) {
        cout << "The element of the even array is found at index " << result << endl;
    } else {
        cout << "The element is not found in the even array." << endl;
    }

    int result2 = binarySearch(odd, 5, 77);
    if (result2 != -1) {
        cout << "The element of the odd array is found at index " << result2 << endl;
    } else {
        cout << "The element is not found in the odd array." << endl;
    }

    return 0;
}
