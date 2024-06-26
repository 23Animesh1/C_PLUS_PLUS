#include <iostream>
using namespace std;

int firstOcuurence(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int LastOcuurence(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int odd[7] = {1, 2, 2, 12, 13, 23};
    int even[6] = {2, 2, 13, 21, 321, 322};

    int first = firstOcuurence(odd, 7, 2);
    cout << "first occurrence of the key in the odd array is: " << first << endl;

    int second = LastOcuurence(odd, 7, 2);
    cout << "last occurrence of the key in the odd array is: " << second << endl;

    int firsteven = firstOcuurence(even, 6, 2);
    cout << "first occurrence of the key in the even array is: " << firsteven << endl;

    int secondeven = LastOcuurence(even, 6, 2);
    cout << "last occurrence of the key in the even array is: " << secondeven << endl;
}
