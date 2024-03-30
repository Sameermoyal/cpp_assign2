// 36. Product Availability Checker: 
// Develop a program that checks the availability of a product in a store. If the product is in  stock(greater than 1) and the user has a valid membership, they can purchase it; otherwise, display  an "Out of stock" message. 


#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter stock: ";
    cin >> a;
    
    char b;
    cout<<"does customer has a valid membership (y/n): ";
    cin>>b;
    
    if(a>1 && b=='y'){
        cout<<"they can purchase this item";
    }else{
        cout<<"Out of stock";
    }

    return 0;
}