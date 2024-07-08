#include<iostream>
using namespace std;

int main(){
    string a,b;
    cout<<"Enter your first name: ";
    cin>>a;
    cout<<"Enter your last name: ";
    cin>>b;
    cout<<"first name length "<<a.size()<<"last name length "<<b.size()<<endl;
    for (int i=b.size();i>=0;i--){
        cout<<b[i];
    }
    for (int i=a.size();i>=0;i--){
        cout<<a[i];
    }
    return 0;
}
