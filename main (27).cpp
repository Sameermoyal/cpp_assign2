// 27. Positive or Negative: 
// Write a program that takes an integer as input and prints whether it is a positive or negative number. 

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (a>0) {
        cout << "positive";
    } else {
        cout << "negative";
    }

    return 0;
}