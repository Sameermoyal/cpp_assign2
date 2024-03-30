// 31.Triangle Validator: 
// Write a program that takes three integer inputs representing the sides of a triangle. Use logical  operators to determine if the triangle is valid (the sum of any two sides is greater than the third).


#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout <<"enter three sides of triangle: ";
    cin >> a >> b>>c;

    if(a+b>c || a+c>b || b+c>a ){
        cout<<"triangle is valid";
    }else{
        cout<<"it's not valid";
    }

    return 0;
}