//write a program that take salry and grades as a input
#include <iostream>
using namespace std;

int main() {
    float salary, bonus, newSalary;
    int grade;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade <= 15) {
        bonus = salary * 0.15; 
        newSalary = salary + bonus;
        cout << "Bonus applied: 15%" << endl;
        cout << "New Salary = " << newSalary << endl;
    }
    else if (grade > 15 && grade <= 20) {
        float bonusPercent = 30 + (grade - 15) * 2;
        bonus = salary * (bonusPercent / 100);
        newSalary = salary + bonus;
        cout << "Bonus applied: " << bonusPercent << "%" << endl;
        cout << "New Salary = " << newSalary << endl;
    }
    else {
        cout << "Invalid Grade! Grade must be 20 or below." << endl;
    }

    return 0;
}

