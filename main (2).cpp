// 2. **Grade Calculator:** 
//  Create a program that takes a student's percentage as input and outputs their corresponding grade  (A, B, C, etc.) using `if-else` statements. 


#include <iostream>

using namespace std;

int main(){
    
    int a;
    cout<<"enter a percentage: ";
    cin>> a;
    
    if(a>=90){
        cout<<"A";
    }else if(a>=80){
        cout<<"B";
    }else if(a>=70){
        cout<<"C";
    }else if(a>=60){
        cout<<"D";
    }else{
        cout<<"F";
    }
    
    return 0;
}