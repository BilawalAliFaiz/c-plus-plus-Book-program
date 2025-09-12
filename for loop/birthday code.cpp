#include <iostream>
#include <windows.h>  
using namespace std;

int main() {
    string name = "Bilawal Ali Faiz";  

    string message = "?? Happy Birthday " + name + "! ??";

    for (int i = 0; i < message.size(); i++) {
        cout << message[i];  
//        Sleep(20);         
    }

    cout << endl;
    return 0;
}

