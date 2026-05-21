#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter a number:";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"The Entered number is a three digit number"<<endl;

    }
    else {
        cout<<"The Entered number is  not a three digit number"<<endl;
    }
}