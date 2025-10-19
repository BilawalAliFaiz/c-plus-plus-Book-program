#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a positive integer n: ";
    if(!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    long long sum = 0;
    long long odd = 1;
    for(long long i = 1; i <= n; ++i) {
        sum += odd;
        odd += 2; 
    }

    cout << "Sum of first " << n << " odd numbers (by loop) = " << sum << endl;
    return 0;
}

