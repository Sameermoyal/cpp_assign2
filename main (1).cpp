// 1. **Even or Odd:** 
//  Write a C++ program that takes an integer as input and uses an `if-else` statement to determine  whether the number is even or odd. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"enter a integer number ";
    cin>>a;
    
    if(a%2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
   
}