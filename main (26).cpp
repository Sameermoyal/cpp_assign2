// 26. Simple Alarm Clock: 
// Write a program that takes the current time as input and prints a message based on whether it's  morning, afternoon, evening, or night. 


#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter time (0-23): ";
    cin >> a;

    if (a >= 6 && a <= 12) {
        cout << "morning";
    } else if (a > 12 && a <= 16) {
        cout << "afternoon";
    } else if (a > 16 && a <= 20) {
        cout << "evening";
    } else {
        cout << "night";
    }

    return 0;
}