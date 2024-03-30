// 5. **Positive, Negative, or Zero:** 
//  Create a C++ program that takes an integer as input and prints whether it is positive, negative, or  zero using `if-else` statements. 

#include<iostream>
using namespace std;

int main(){
    
    int a;
    
    cout<<"enter number: ";
    cin>>a;
    
    
    
    if(a>0){
        cout<<"positive";
    }else if(a<0){
        cout<<"negative";
    }else{
        cout<<"zero";
    }
    
    return 0;
}