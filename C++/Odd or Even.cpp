#include<iostream>
using namespace std;

int main(){
     int no;
     cout<<"Check the Number is odd or even"<<endl;
     cout<<"Enter No = ";
     cin>>no;
     if(no%2 == 0){
          cout<<"No is Even";
     }else if(no%2 != 0){
          cout<<"No is Odd";
     }else {
          cout<<"Error";
     }

     return 0;
}
