#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;

    int arr[n];
    int value;

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        arr[i] = value;
    }
    int max = arr[0];
    int min = arr[n-1];
    // cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        if ( arr[i]>= max){
            max = arr[i];
        }
        if (arr[i]<= min){
            min = arr[i];
        }    }

    // return 0;

    cout <<"Maximum value in array " <<max<<endl;
    cout<<"Minimum value in array"<<min<<endl;
}
