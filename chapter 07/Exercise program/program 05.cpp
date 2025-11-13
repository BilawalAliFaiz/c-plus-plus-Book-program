//write a program that input ten integer in array.It displays the number of occurance of each number in the array as follow:
//	3 is stored 4 times in the array.
//	1 is stored 2 times in the array.
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count[10]; // to store how many times each number appears
    int i, j;

    cout << "Enter 10 integers:\n";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
        count[i] = 1; // initialize count array
    }

    for (i = 0; i < 10; i++) {
        int c = 1;
        for (j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                c++;
                count[j] = 0; // mark as counted
            }
        }
        if (count[i] != 0)
            count[i] = c;
    }

    cout << "\nNumber of occurrences:\n";
    for (i = 0; i < 10; i++) {
        if (count[i] != 0)
            cout << arr[i] << " is stored " << count[i] << " times in the array.\n";
    }

    return 0;
}


