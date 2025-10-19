//write a program to find the largest,smallest, and average of n whole number .You can asume that "n" has already been set by the user.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers you want to enter: ";
    cin >> n;

    int num;
    int largest, smallest;
    float sum = 0;

    cout << "Enter " << n << " whole numbers: " << endl;
    cin >> num;  
    largest = smallest = num;
    sum = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        sum = sum + num;

        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }

    float average = sum / n;

    cout << "Largest number = " << largest << endl;
    cout << "Smallest number = " << smallest << endl;
    cout << "Average = " << average << endl;

    return 0;
}

