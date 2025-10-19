//write a program to print the following sequence.64,32,16,8,4,2
#include <iostream>
using namespace std;

int main() {
    int num = 64;

    while(num >= 2) {
           cout << num;
        if(num != 2) { 
            cout << ",";
        }
        num = num / 2; 
     
    }

    return 0;
}


