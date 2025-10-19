//write a program to print the following series 1 3 9 27 21 ...100
#include <iostream>
using namespace std;

int main() {
    int n = 1; 
    while (n <= 200) {
        cout << n << " ";
        n = (n * 3); 
    }
    return 0;
}

