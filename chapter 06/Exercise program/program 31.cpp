//write a program to display the output using while loop.                                                                                                                                                                                                                                                                                                                                                     
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 55; i=i+2) {       
        for (int j =1; j <= i;j=j+2) {  
            cout<<j << " ";
        }
        cout << endl; 
    }
    return 0;
}
