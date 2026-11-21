
#include <iostream>
using namespace std;

int main() {
    int student = 1;
    int passed = 0;
    int failed = 0;
    float grade;

    cout << "===== STUDENT PASSING COUNTER =====" << endl;

    while (student <= 10) {
        cout << "Enter grade of Student " << student << ": ";
        cin >> grade;

        if (grade >= 75) {
            cout << "PASSED" << endl;
            passed++;
        } else {
            cout << "FAILED" << endl;
            failed++;
        }

        student++;
    }

    cout << "\n===== FINAL RESULT =====" << endl;
    cout << "Total Passed: " << passed << endl;
    cout << "Total Failed: " << failed << endl;

    return 0;
}
