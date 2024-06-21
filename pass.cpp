#include<iostream>
using namespace std;
int main(){
    string password;
    int attempts = 0;
    while(attempts<3){
        cout<<"Enter your password: "<<endl;
        cin>>password;
        attempts++;
        if(password !="nashandsteve77"){
            cout<<"Permission Denied. Try again"<<endl;
        }
        else{
            cout<<"Permission Granted. Welcome to our program"<<endl;
            break;
        }

    }
    if(attempts ==0){
        cout<<"You Exceeded your Attempts. Call Your Service provider.";
    }
    return 0;
}