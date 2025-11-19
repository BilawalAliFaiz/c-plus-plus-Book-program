#include <iostream>
using namespace std;

int main()
  {
    int score[5][5] = {
        {85, 90, 75, 88, 92},
        {78, 81, 69, 74, 80},
        {90, 95, 88, 93, 97},
        {70, 65, 72, 68, 74},
        {88, 82, 85, 80, 79}
    };
    int row, student;

    cout << "Enter row number (0-4): ";
    cin >> row;

    cout << "Enter student number in that row (0-4): ";
    cin >> student;

    cout << "score of the student are : "<<score[row][student]<<endl;

    return 0;
}
