// 10. **Largest of Three Numbers:** 
//  Write a C++ program that takes three numbers as input and outputs the largest one using `if-else`  statements and relational operators. 


#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    
    cout<<"enter 1st number: ";
    cin>>a;
    
    cout<<"enter 2nd number: ";
    cin>>b;
    
    cout<<"enter 3rd number: ";
    cin>>c;
    
    int max=a;
    
    if(max<b && b>c){
        max=b;
    }else if(max<c){
        max=c;
    }
    
    cout<<max;
    return 0;
}