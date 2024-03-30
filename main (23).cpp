// 23. **Bookstore Discount Calculator:** 
//  Implement a program that calculates the total cost of books after applying discounts based on the  quantity purchased. Use `if-else` statements to determine the discount rate. 
// Purchased above Rs 10000 then discount 5% 
// Purchased above Rs 20000 then discount 10% 
// Purchased above Rs 30000 then discount 15% 

#include <iostream>
using namespace std;
int main()
{
    int a;
    
    
    cout<<"enter total ammount: ";
    cin>> a;
    
    if(a>30000){
        cout<<"final amount is: "<<a - (a*0.15);
    }else if(a>20000){
        cout<<"final amount is: "<<a - (a*0.10);
    }else if(a>10000){
        cout<<"final amount is: "<<a - (a*0.05);
    }else{
        cout<<"final amount is: "<<a;
    }
    
    
   
    return 0;
}