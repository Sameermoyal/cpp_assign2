// 11. **Vowel or Consonant:** 
//  Create a program that takes a character as input and determines whether it is a vowel or  consonant using `if-else` statements. 


#include<iostream>
using namespace std;

int main(){
    
    char a;
    
    cout<<"enter a character: ";
    cin>>a;
    
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        cout<<"vowel";
    }else{
        cout<<"consonant";
    }
    
    
    return 0;
}