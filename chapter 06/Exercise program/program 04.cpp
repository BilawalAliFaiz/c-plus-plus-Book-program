//write a program to display alphabets from A to Z using for loop.
#include <iostream>
using namespace std;

int main() {
    cout << "Alphabets from A to Z:" << endl;

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }

    cout << endl;
    return 0;
}

