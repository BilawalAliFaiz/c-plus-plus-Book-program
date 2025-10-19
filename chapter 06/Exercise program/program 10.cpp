//write a program that input a number from the user and display all perfect number up to the number entered.
#include <iostream>
using namespace std;

int main() {
    int num, sum;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Perfect numbers from 1 to " << num << " are: " << endl;

    for (int i = 1; i <= num; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0)
                sum += j;
        }

        
        if (sum == i)
            cout << i << " ";
    }

    cout << endl;
    return 0;
}

