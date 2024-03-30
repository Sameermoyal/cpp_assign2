// 34. Book Discount Calculator: 
// Develop a program that calculates the total cost of books based on the quantity. Apply a discount of  10% if the quantity is between 5 and 10, and 20% if the quantity is more than 10. 


#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter quantity of books(cost per book is 500): ";
    cin >> a;
    
    int cost =a*500;
    
    if(a<=5){
        cout<<cost;
    }else if(a>5 && a<=10){
        cout<<cost-(cost*.10);
    }else if(a>10){
        cout<<cost-(cost*.20);
    }

    return 0;
}