// 33.Login System with Multiple Conditions: 
// Implement a basic login system. Ask the user to enter both a username and a password. Use logical  operators to check if the username is "admin" and the password is "admin@123". 


#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout <<"enter a username and password: ";
    cin >> username >> password;

    if(username=="admin" && password=="admin@123"){
        cout<<"access done";
    }else{
        cout<<"not access";
    }

    return 0;
}