#include <iostream>
using namespace std;

int main() {
    int marks[10];
    int a = 0, b = 0, c = 0, d = 0, f = 0;

    cout << "Enter marks of 10 students:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];

        if (marks[i] >= 80)
            a++;
        else if (marks[i] >= 70)
            b++;
        else if (marks[i] >= 60)
            c++;
        else if (marks[i] >= 50)
            d++;
        else
            f++;
    }

    cout << "\nNumber of students in each grade:\n";
    cout << "Grade A: " << a << endl;
    cout << "Grade B: " << b << endl;
    cout << "Grade C: " << c << endl;
    cout << "Grade D: " << d << endl;
    cout << "Grade F: " << f << endl;

    return 0;
}

