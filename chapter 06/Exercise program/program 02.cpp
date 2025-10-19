//write a program to display the following format using while loop.
//--------------------
//num            sum
//--------------------
//1              1
//2              3
//3              6
//4              10 
//5              15   
#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int sum = 0;

    cout << "num\t sum" << endl;
    cout << "--------------------" << endl;

    while (num <= 5) {
        sum = sum + num;  
        cout << num << "\t  " << sum << endl;
        num++;            
    }

    return 0;
}


