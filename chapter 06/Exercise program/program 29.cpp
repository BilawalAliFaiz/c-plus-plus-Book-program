//write a program to display the following output using the loop.
#include <iostream>
using namespace std;

int main() {
    for (char ch = 'A'; ch <= 'E'; ch++) {       
        for (char j = 'A'; j <= ch; j++) {  
            cout << j << " ";
        }
        cout << endl; 
    }
    return 0;
}

