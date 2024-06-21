#include<iostream>
using namespace std;
int main(){
    int marks =0;
    string name;
    while(marks<5){
        cout<<"Enter the student name: "<<endl;
        cin>>name;
        cout<<"Enter the student's marks: "<<endl;
        cin>>marks;
        marks++;
    }
    return 0;

}