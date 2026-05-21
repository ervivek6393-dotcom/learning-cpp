#include<iostream>
using namespace std;
int main(){
    int x ,y ;
    cout<<"Enter the value of x and y:";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point ("<<x<<", "<<y<<") lies at the origin"<<endl;
    }
    else if(x>0 && y>0){
        cout<<"The point ("<<x<<", "<<y<<") lies in the 1st quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"The point ("<<x<<", "<<y<<") lies in the 2nd quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"The point ("<<x<<", "<<y<<") lies in the 3rd quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"The point ("<<x<<", "<<y<<") lies in the 4th quadrant"<<endl;
    }
    return 0;

}