// 37. Credit Score Evaluator: 
// Write a program that evaluates a person's credit score and categorizes it as "Excellent," "Good,"  "Fair," or "Poor" using if-else statements. 
// Credit score >1,00,000 Good 
// Credit score>50,000 Fair 
// Credit score>10,000 Poor 

#include <iostream>
using namespace std;

int main() {
    int a;

    cout <<"enter credit score: ";
    cin >> a;
    
    
    if(a>100000){
        cout<<"good";
    }else if(a>50000){
        cout<<"fair";
    }else if(a>10000){
        cout<<"poor";
    }else{
        cout<<"very poor";
    }

    return 0;
}