// 35. Ticket Price Determiner: 
// Write a program that determines the price of a movie ticket based on the age of the person. Apply  different rules for children(0-5), adults(5-12), and seniors(18-above). 


#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter age(cost per ticket is 100): ";
    cin >> a;
    
    if(a<5){
        cout<<100-(100*.50);
    }else if(a>=5 && a<=12){
        cout<<100-(100*.25);
    }else if(a>=18){
        cout<<100- (100*.10);
    }

    return 0;
}