#include <iostream>
using namespace std;

int main() {
    // Test Case 1
    int age = 18;
    int points = 450;

    // شرط العمر
    if (age > 18) {
        cout << "Yes Age Is Ok" << endl;
    } else {
        cout << "No Age Is Not Ok" << endl;
    }

    // شرط النقاط
    if (points > 500) {
        cout << "Yes Points Is Ok" << endl;
    } else {
        cout << "No Points Is Not Ok" << endl;
    }

    cout << "------------------" << endl;

    // Test Case 2
    age = 20;
    points = 450;

    if (age > 18) {
        cout << "Yes Age Is Ok" << endl;
    } else {
        cout << "No Age Is Not Ok" << endl;
    }

    if (points > 500) {
        cout << "Yes Points Is Ok" << endl;
    } else {
        cout << "No Points Is Not Ok" << endl;
    }

    cout << "------------------" << endl;

    // Test Case 3
    age = 20;
    points = 650;

    if (age > 18) {
        cout << "Yes Age Is Ok" << endl;
    } else {
        cout << "No Age Is Not Ok" << endl;
    }

    if (points > 500) {
        cout << "Yes Points Is Ok" << endl;
    } else {
        cout << "No Points Is Not Ok" << endl;
    }

    return 0;
}
