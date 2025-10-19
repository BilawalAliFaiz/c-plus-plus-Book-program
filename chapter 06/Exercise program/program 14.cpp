//write a program that take n number as input.it displays total  positive and negative number.
#include <iostream>
using namespace std;

int main() {
    int n, num;
    int positiveCount = 0, negativeCount = 0;

    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > 0)
            positiveCount++;
        else if (num < 0)
            negativeCount++;
    }

    cout << "\nTotal positive numbers: " << positiveCount << endl;
    cout << "Total negative numbers: " << negativeCount << endl;

    return 0;
}

