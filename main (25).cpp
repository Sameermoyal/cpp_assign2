// 25. **Income Tax:** 
//  Implement a program that calculates the total tax after applying discounts based on the income.  Use `if-else` statements to determine the discount rate. 
// Salary below Rs 100000 then discount 15% 
// Salary below Rs 200000 then discount 10% 
// Salary below Rs 30000 then discount 25% 


#include <iostream>
using namespace std;
int main()
{
    int a;
    
    
    cout<<"enter total tax amount: ";
    cin>> a;
    
    int b;
    cout<<"choose one - is your income less than (100000:1 , 200000:2, 30000:3): ";
    cin>>b;
    
    
    if(b==3){
        cout<<"final tax is: "<<a - (a*0.25);
    }else if(b==1){
        cout<<"final tax is: "<<a - (a*0.15);
    }else if(b==2){
        cout<<"final amount is: "<<a - (a*0.10);
    }else{
        cout<<"final amount is: "<<a;
    }
    
    
   
    return 0;
}