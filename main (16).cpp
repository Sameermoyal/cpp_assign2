// 16. **Currency Converter:** 
//  Write a program that converts currency from one unit to another. Use `if-else` statements to  determine the conversion based on the selected currency pair. 


#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a value is us dollar: ";
    cin>>a;
    
    char b;
    cout<<"choose one (china:c, india:i, pakistan:p): ";
    cin>>b;
    
    if(b=='i'){
        cout<<"INDIA: "<<83.38 * a;
    }else if(b=='c'){
        cout<<"CHINA: "<<7.23 * a;
    }else{
        cout<<"PAKISTAN: "<<277.95 * a;
    }
    
    
    return 0;
    
   
   
}