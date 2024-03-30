// 4. **Triangle Type:** 
//  Develop a program that takes three angles as input and determines whether the triangle is acute,  obtuse, or right-angled using `if-else` statements. 


#include<iostream>
using namespace std;

int main(){
    
    int a, b, c;
    
    cout<<"enter 1st angle: ";
    cin>>a;
    
    cout<<"enter 2nd angle: ";
    cin>>b;
    
    cout<<"enter 3rd angle: ";
    cin>>c;
    
    if(a+b+c == 180){
        if(a==90 || b==90 || c==90){
            cout<<"this is right angle triangle";
        }else if(a>90 || b>90 || c>90){
            cout<<"this is a obtuse angle triangle";
        }else{
            cout<<"this is a acute angle triangle";
        }
    }else{
        cout<<"invalid inputs";
    }
    
    return 0;
}