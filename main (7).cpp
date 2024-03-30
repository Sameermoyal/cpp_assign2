// 7. **Traffic Light Simulation:** 
//  Write a program that simulates a traffic light. The program should take user input for the current  signal and output the next signal using `if-else` statements. 
#include<iostream>
using namespace std;

int main(){
    
    string a;
    
    cout<<"enter signal: ";
    cin>>a;
    
    
    
    if(a=="red"){
        cout<<"green";
    }else if(a=="green"){
        cout<<"yellow";
    }else if(a=="yellow"){
        cout<<"red";
    }else{
        cout<<"invalid input";
    }
    
    return 0;
}