#include <iostream>
using namespace std;

int main() {
    int num = 8;            
    int diff[] = {4, 5, 7}; 
    int i = 0;

    cout << num; 

    while (num < 100) {
        num = num + diff[i]; 
        if (num > 100) break;
        cout << " " << num;
        i = (i + 1) % 3; 
    }

    cout << endl;
    return 0;
}

