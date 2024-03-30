// 3. **Leap Year Checker:** 
//  Write a program that checks if a given year is a leap year or not. Use an `if-else` statement and  logical operators to make the determination. 


#include <iostream>

using namespace std;

int main(){
    
    int year;
    cout<<"enter year: ";
    cin>> year;
    
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout<<"this is a leap year";
    }else{
        cout<<"this is not a leap year";
    }
    
    return 0;
}