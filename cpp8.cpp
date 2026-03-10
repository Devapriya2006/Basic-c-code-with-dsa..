#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    char gradePoint =
        (marks >= 90) ? 'A' :
        (marks >= 80) ? 'B'  :
        (marks >= 70) ? 'C'  :
        (marks >= 60) ? 'D' :
        (marks >= 50) ?  'E' : 'F';

    cout << "Grade Point = " << gradePoint;

    return 0;
}
