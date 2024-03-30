// 40. Day Type Identifier: 
// Implement a program that takes a day of the week (Monday, Tuesday, etc.) as input and prints  whether it's a weekday or a weekend day using if-else statements.


#include <iostream>
using namespace std;

int main() {
    string a;
    

    cout <<"enter day (must be in lowercase): ";
    cin >> a;
    
    if(a=="monday"){
        cout<<"weekday";
    }else if(a=="tuesday"){
        cout<<"weekday";
    }else if(a=="wednesday"){
        cout<<"weekday";
    }else if(a=="thursday"){
        cout<<"weekday";
    }else if(a=="friday"){
        cout<<"weekday";
    }else if(a=="saturday"){
        cout<<"weekend";
    }else{
        cout<<"weekend";
    }
    
    

    return 0;
}