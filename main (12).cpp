// 12. **Age Classifier:** 
//  Write a program that classifies a person into different age groups (child, teenager, adult, senior)  based on their age using `if-else` statements. 


#include<iostream>
using namespace std;

int main(){
    
    int a;
    
    cout<<"enter age: ";
    cin>>a;
    
    if(a<=16){
        cout<<"child";
    }else if(a<=25){
        cout<<"teenager";
    }else if(a<=50){
        cout<<"adult";
    }else{
        cout<<"senior";
    }
    
    
    return 0;
}