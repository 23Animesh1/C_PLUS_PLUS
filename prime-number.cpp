#include <iostream>
using namespace std;

int main() {
    int i = 0, j = 0, num, n;

    cout << "Enter how many numbers you want to check: ";
    cin >> n;

    while (i < n) {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 2) {
            cout << "It is not a prime number" << endl;
        } else {
            bool isPrime = true;
            for (int divisor = 2; divisor <= num / 2; divisor++) {
                if (num % divisor == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                cout << "It is a prime number" << endl;
            } else {
                cout << "It is not a prime number" << endl;
            }
        }

        i++;
    }

    return 0;
}
