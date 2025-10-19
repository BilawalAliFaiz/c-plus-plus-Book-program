//write a program that display the sum of following series using do while loop.
//1+1/4+1/8+.......1/100
#include <iostream>
using namespace std;

int main() {
    float i = 1;
    float sum = 0;

    do {
        sum = sum + (1 / i);
        i = i + 4;         
    } while (i <= 100);

    cout << "Sum of the series = " << sum << endl;

    return 0;
}


