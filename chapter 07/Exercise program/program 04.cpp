#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    float monthlySalary, annualSalary;

    cout << "Enter name and monthly salary of 10 employees:\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << "\nEmployee " << i << " name: ";
        cin >> name;

        cout << "Monthly salary: ";
        cin >> monthlySalary;

        annualSalary = monthlySalary * 12;

        cout << "\nName: " << name << endl;
        cout << "Annual Salary: " << annualSalary << " Rs" << endl;

        if (annualSalary >= 250000)
        {
            cout << "Message: Tax to be paid" << endl;
        }
        else
        {
            cout << "Message: No tax" << endl;
        }
    }

    return 0;
}

