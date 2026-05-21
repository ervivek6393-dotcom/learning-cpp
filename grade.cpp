#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks of a student:"<<endl;
    cin>>marks;
    if(marks>= 81 && marks<=100){
        cout<<"Very Good"<<endl;
    }
    else if(marks>= 61 && marks<=80){
        cout<<"Good"<<endl;
    }
    else if(marks>= 41 && marks<=60){
        cout<<"Fair"<<endl;
    }
    else if(marks>= 0 && marks<=40){
        cout<<"Poor"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}