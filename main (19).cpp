// 19. **Ticket Price Calculator:** 
//  Write a program that calculates the ticket price for a movie based on age and time of day. Apply  discounts for children and seniors using `if-else` statements. 


#include <iostream>
using namespace std;
int main()
{
    int age, t;
    
    
    cout<<"enter age: ";
    cin>> age;
    
    cout<<"enter time(0-24): ";
    cin>> t;
   
    
    if(age<=12 || age>=55){
        if(t<17){
            cout<< 100 - (100*0.10);
        }else{
            cout<< 100 - (100*0.05);
        }
    }else{
        cout<< 100;
    }
    
    
    return 0;
}