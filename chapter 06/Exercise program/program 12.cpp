//write a program that input a number from the user and display all prime number which are less than the input number using any loop.
#include <iostream>
using namespace std;

int main() {
    int num, i, j, isPrime;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime numbers less than " << num << " are: " << endl;

    for (i = 2; i < num; i++) {  
        isPrime = 1;  

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}

