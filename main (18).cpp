// 18. **Day of the Week:** 
//  Create a program that takes a number representing a day of the week (1 for Sunday, 2 for Monday,  etc.) and prints the corresponding day using `if-else` statements. 

#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    
    if(a==1){
        cout<<"monday";
    }else if(a==2){
        cout<<"tuesday";
    }else if(a==3){
        cout<<"wednesday";
    }else if(a==4){
        cout<<"thursday";
    }else if(a==5){
        cout<<"friday";
    }else if(a==6){
        cout<<"saterday";
    }else if(a==7){
        cout<<"sunday";
    }
    
    
    return 0;
    
   
   
}