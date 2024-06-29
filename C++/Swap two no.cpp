#include<iostream>
using namespace std;

int main(){
    int no_1,no_2;
    cout<<"Enter NO-1 : ";
    cin>>no_1;
    cout<<"Enter NO-2 : ";
    cin>>no_2;
    cout<<"Before Swap"<<"No-1 is "<<no_1<<" and No-2 is "<<no_2<<" ."<<endl;
    no_1 = no_1 + no_2;
    no_2 = no_1 - no_2;
    no_1 = no_2 - no_1;
    cout<<"After Swap"<<"No-1 is "<<no_1<<" and No-2 is "<<no_2<<" .";

    return 0;
}
