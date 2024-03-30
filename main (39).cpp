// 39. Student Eligibility Checker: 
// Implement a program that checks if a student is eligible for a scholarship based on their grades. Use  if-else statements to determine eligibility criteria. 

#include <iostream>
using namespace std;

int main() {
    int a;
    

    cout <<"enter grades(0-100): ";
    cin >> a;
    
    if(a>90){
        cout<<"you are eligible for scholarship";
    }else{
        cout<<"you are not eligible for scholarship";
    }
    
    

    return 0;
}