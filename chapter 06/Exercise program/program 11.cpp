//write a program that input number of student in the class.It then input the mark of these student and display the highest and second highest marks.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks;
    int highest = -1, second_highest = -1;

    for (int i = 1; i <= n; i++) {
        cout << "Enter marks of student " << i << ": ";
        cin >> marks;

        if (marks > highest) {
            second_highest = highest; 
            highest = marks;          
        } 
        else if (marks > second_highest && marks < highest) {
            second_highest = marks;
        }
    }

    cout << "\nHighest marks: " << highest << endl;
    cout << "Second highest marks: " << second_highest << endl;

    return 0;
}

