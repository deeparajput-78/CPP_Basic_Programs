#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the value of c"<<endl;
    cin>>c;
    if(a>c && a>b){
        cout<<"a is greatest number";
     }
    else if (b>a && b>c){
        cout<<"b is greatest number";
    }
    else {
        cout<<"C is greatest number";
     }

    return 0;
}