#include<iostream>
using namespace std;
int main(){
    float l,b;
    float area, perimeter;
    cout<<"Enter the lenght of the rectangle:";
    cin>>l;
    cout<<"Enter the breadth of the rectangle:";
    cin>>b;
    area = l * b;
    perimeter = 2 * (l + b);
    cout<<"The area of the rectangle is "<<area<<endl;
    cout<<"The perimeter of the rectangle is "<<perimeter<<endl;
    if(area>perimeter){
        cout<<"The area is greater than the perimeter"<<endl;
    
    }
    else if(area<perimeter){
        cout<<"The perimeter is greater than the area"<<endl;
    }
    else {
        cout<<"The area and perimeter are equal"<<endl;
    }
}