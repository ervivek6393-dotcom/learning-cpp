#include<iostream>
using namespace std;
int main(){
    float n1, n2;
    cout<<"Enter the cost:";
    cin>>n1;
    cout<<"Enter the selling price:";
    cin>>n2;
    if(n2>n1){
        cout<<"Profit"<<endl;
    }
    else if(n2<n1){
        cout<<"Loss"<<endl;

    }
    else{
        cout<<"No Profit No Loss"<<endl;
    }
}