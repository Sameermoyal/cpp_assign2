// 8. **Divisibility Checker:** 
//  Create a program that checks if a given number is divisible by both 5 and 7. Use logical operators  within an `if` statement for the check. 


#include<iostream>
using namespace std;

int main(){
    
    int a;
    
    cout<<"enter a number: ";
    cin>>a;
    
    if(a%5==0 && a%7==0){
        cout<<"this number is divisible by 5 and 7";
    }else{
        cout<<"this number is not divisible by 5 and 7";
    }
    
    return 0;
}