//write a program that input a number from the user and display the fibonacci series up to the number entered.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int a = 0, b = 1, next;

    cout << "Fibonacci series up to " << num << " is: " << endl;

    cout << a << " " << b << " ";

    next = a + b;

    while (next <= num) {
        cout << next << " ";
        a = b;
        b = next;
        next = a + b;
    }

    cout << endl;
}


