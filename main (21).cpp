// 21. **Electricity Bill Calculator:** 
//  Create a program that calculates the electricity bill based on the units consumed. Apply different  rates for different consumption ranges using `if-else` statements. 


#include <iostream>
using namespace std;
int main()
{
    int a;
    
    
    cout<<"enter units: ";
    cin>> a;
    
    if(a<=100){
        cout<<a*10;
    }else if(a<=150){
        cout<<a*9;
    }else if(a<=200){
        cout<<a*8;
    }else{
        cout<<a*7;
    }
    
    
    return 0;
}