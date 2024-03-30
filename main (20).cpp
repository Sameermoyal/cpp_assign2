// 20. **Character Classification:** 
//  Develop a program that classifies a given character into categories such as uppercase letter,  lowercase letter, digit, or special character using `if-else` statements. 

#include <iostream>
using namespace std;
int main()
{
    char a;
    
    
    cout<<"enter a character:(a, A, #, 2) ";
    cin>> a;
    
    if(a=='a'){
        cout<<"lowercase letter";
    }else if(a=='A'){
        cout<<"uppercase letter";
    }else if(a=='#'){
        cout<<"special character";
    }else{
        cout<<"digit";
    }
    
    
    return 0;
}