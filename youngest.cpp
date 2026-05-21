#include<iostream>
using namespace std;
int main(){
    int R, S, A;
    cout<<"Enter the age of Ram"<<endl;
    cin>>R;
    cout<<"Enter the age of Shyam"<<endl;
    cin>>S;
    cout<<"Enter the age of Ajay"<<endl;
    cin>>A;
    if(R<S && R<A){
        cout<<"Ram is youngest"<<R<<endl;
    }
    else  if (S<R && S<A){
        cout<<"Shyam is youngest"<<S<<endl;

    }
    else{
        cout<<"Ajay is youngest"<<A<<endl;
    }
    return 0;

}