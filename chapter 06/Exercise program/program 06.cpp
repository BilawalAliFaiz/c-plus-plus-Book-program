//write a program that inputs a series of 20 number and displays the minimum value.
#include <iostream>
using namespace std;

int main() {
    int num;
    int min;

    cout << "Enter 20 numbers: " << endl;

    cin >> num;  
    min = num;    

    for (int i = 1; i < 20; i++) {
        cin >> num;
        if (num < min)
            min = num;
    }

    cout << "The minimum value is: " << min << endl;

    
}

