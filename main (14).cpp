// 14. **Palindrome Checker:** 
//  Develop a program that checks if a given string is a palindrome (reads the same backward as  forward). Use `if-else` statements for the check. 


#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;
    
    int rem, sum=0, tem=a;
    while(a>0){
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    cout<<sum<<endl;
    if(tem==sum){
        cout<<"this is palindrome";
    }else{
        cout<<"this is not a palindrome";
    }
}