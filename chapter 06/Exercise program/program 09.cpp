//write a program that input a number from the user and display all armstrong number up to the number entered.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, sum, n;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Armstrong numbers from 1 to " << num << " are: " << endl;

    for (int i = 1; i <= num; i++) {
        temp = i;
        sum = 0;

        
        n = 0;
        int temp2 = i;
        while (temp2 != 0) {
            temp2 /= 10;
            n++;
        }

        
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }

        if (sum == i) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

