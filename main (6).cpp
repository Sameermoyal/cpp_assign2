// 6. **Login System:** 
//  Implement a basic login system where the user enters a username and password. Use `if-else`  statements to validate the login credentials. 

#include<iostream>
using namespace std;

int main(){
    
    string a, b;
    
    cout<<"enter username: ";
    cin>>a;
    
    cout<<"enter password: ";
    cin>>b;
    
    
    if(a=="sameer" && b=="moyal"){
        cout<<"active";
    }else{
        cout<<"try again";
    }
    
    return 0;
}