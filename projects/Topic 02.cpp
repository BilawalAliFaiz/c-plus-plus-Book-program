//?? Project 2: Number Utility Toolkit
//
//Statement:
//Create a menu-driven program (using switch) that allows the user to perform operations on numbers:
//	1.	Reverse a number
//	2.	Swap two numbers
//	3.	Check if number is prime / even / odd (using nested if & conditional operator)
//	4.	Find factorial (using for loop / while loop)
//	5.	Exit
//
//		Use input validation (if fail) for correct number entry.
//	•	Display results with manipulators (e.g., aligning output with setw, showing precision).
//	•	Program runs in a loop until the user chooses to exit.
#include <iostream>
#include <iomanip>   
#include <conio.h>
#include<cstdlib>
using namespace std;

int main() {
    int choice;
    do {
    
        cout << "\n" << setfill('=') << setw(40) << "" << endl;
        cout << setfill(' ') << setw(25) << "Number Utility Toolkit" << endl;
        cout << setfill('=') << setw(40) << "" << endl;
        cout << "1. Reverse a number\n";
        cout << "2. Swap two numbers\n";
        cout << "3. Check Prime / Even / Odd\n";
        cout << "4. Find Factorial\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        if (cin.fail()) { 
            cout << "Invalid input! Please enter numbers only.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                int num, rev = 0;
                cout << "Enter a number to reverse:Number must be  in integer form : ";
                cin >> num;
                if (cin.fail()) {
                    cout << "Invalid input!\n";
                    break;
                }
                int temp = num;
                while (temp > 0) {
                    rev = rev * 10 + (temp % 10);
                    temp /= 10;
                }
                cout << "Reversed Number = " << rev << endl;
                break;
            }

            case 2: {
                int a, b;
                cout << "Enter two numbers:Number must be integer form ";
                cin >> a >> b;
                if (cin.fail()) {
                    cout << "Invalid input!\n";
                    break;
                }
                cout << "Before Swap: a = " << a << ", b = " << b << endl;
                int temp = a;
                a = b;
                b = temp;
                cout << "After Swap:  a = " << a << ", b = " << b << endl;
                break;
            }

            case 3: {
                int num;
                cout << "Enter a number: Number must be integer form :";
                cin >> num;
                if (cin.fail()) {
                    cout << "Invalid input!\n";
                    break;
                }
                cout << num << (num % 2 == 0 ? " is Even\n" : " is Odd\n");
                bool isPrime = true;
                if (num <= 1) {
                    isPrime = false;
                } else {
                    for (int i = 2; i <= num / 2; i++) {
                        if (num % i == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                }

                if (isPrime)
                    cout << num << " is Prime\n";
                else
                    cout << num << " is NOT Prime\n";

                break;
            }

            case 4: {
                int num;
                unsigned long long fact = 1;
                cout << "Enter a number to find factorial: Number must be integer form:";
                cin >> num;
                if (cin.fail() || num < 0) {
                cout << "Invalid input! Factorial not possible.\n";
                break;
                }
            for (int i = 1; i <= num; i++) {
                fact *= i;
               }
            cout << "Factorial of " << num << " = " << fact << endl;
             break;
            }

        case 5:
        cout << "Exiting program. Goodbye!\n";
        break;

         default:
         cout << "Invalid choice! Please select 1–5.\n";
        }

    } while (choice != 5);

    return 0;
}

