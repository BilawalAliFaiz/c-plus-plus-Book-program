//write a program that dispaly the following series using while loop 
//-----------------------------
//a                         b
//1                          5
//2                          4  
//3                          3
//4                          2   
//5                          1
#include <iostream>
using namespace std;

int main() {
int a = 1;
 int b = 5;

    cout << "a\tb" << endl;      
    cout << "-----------------" << endl;

    while (a <= 5 && b >= 1) {
        cout << a << "\t" << b << endl;
        a++;   
        b--;  
    }

}

 
