#include <iostream>
using namespace std;

int data(int x, int y){
    if(x%2==0 && y%2==0){
        cout<<"both are even";
    }else if(x%2!=0 && y%2==0){
        cout<<"b is even & a is odd";
    }else if(x%2==0 && y%2!=0){
        cout<<"a is even & b is odd";
    }else if(x%2!=0 && y%2!=0){
        cout<<"both are odd";
    }else{
        cout<<"error";
    }
    return 0;
}

int main (){
    int a,b;
    cout<<"Enter no 1 : ";
    cin>>a;
    cout<<"Enter no 2 : ";
    cin>>b;
    data(a,b);
    return 0;
}
