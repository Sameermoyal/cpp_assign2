// 29.Age Group Identifier: 
// Write a program that takes the age of a person as input. Use logical operators to categorize them into  "Child" (0-12), "Teenager" (13-19), "Adult" (20-59), and "Senior" (60 and above). 


#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter age: ";
    cin >> a;

    if (a<=12) {
        cout << "child";
    }else if(a>=13 && a<=19){
        cout<<"teenager";
    }else if(a>=20 && a<=59){
        cout<<"adult";
    }else{
        cout<<"senior";
    }

    return 0;
}