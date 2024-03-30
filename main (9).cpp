// 9. **Temperature Converter:**
//  Develop a program that converts temperatures between Celsius and Fahrenheit. Use `if-else`  statements to handle the conversion based on user input. 


#include<iostream>
using namespace std;

int main(){
    
    float a;
    
    cout<<"enter temprature: ";
    cin>>a;
    
    char b;
    cout<<"c or f: ";
    cin>>b;
    
    if(b=='c'){
        cout<<(a*9/5) +32;
    }else{
        cout<<(a-32)*5/9;
    }
    
    return 0;
}