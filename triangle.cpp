#include<iostream>
using namespace std;
int main(){
    int n1, n2,n3;
    cout<<"Enter the sides of a triangle:";
    cin>>n1>>n2>>n3;
    if((n1+n2)>n3 && (n2+n3)>n1 && (n1+n3)>n2){
        cout<<"The sides "<<n1<<", "<<n2<<" and "<<n3<<" can form a triangle"<<endl;
    }
    else{
        cout<<"The sides "<<n1<<", "<<n2<<" and "<<n3<<" cannot form a triangle"<<endl;
    }

    }
