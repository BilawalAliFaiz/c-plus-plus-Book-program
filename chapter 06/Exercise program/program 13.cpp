//write a program that input an integer amd display wheter it is prime number or not.
#include <iostream>
using namespace std;

int main() {
    int num, i, isPrime = 1;

    cout << "Enter an integer: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

