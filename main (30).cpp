// 30.Grade Validator: 
// Create a program that takes a student's score as input. Use logical operators to check if the score is  valid (between 0 and 100) and output whether the student passed (score >= 50) or failed. 


#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter score: ";
    cin >> a;

    if (a>=0 && a<=100) {
        if(a>=50){
            cout<<"passed";
        }else{
            cout<<"failed";
        }
    }else{
        cout<<"invalid input";
    }

    return 0;
}