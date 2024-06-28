#include<iostream>
using namespace std;

int main(){
     cout<<"Find the Largest of the three numbers."<<endl<<endl;
     int no_1,no_2,no_3;
     cout<<"Enter Number 1 = ";
     cin>>no_1;
     cout<<"Enter Number 2 = ";
     cin>>no_2;
     cout<<"Enter Number 3 = ";
     cin>>no_3;
  
     if(no_1>=no_2 && no_1>=no_3){
          cout<<"Number 1 is the Largest";
     }else if(no_2>no_1 && no_2>no_3){
          cout<<"Number 2 is the Largest";
     }else if(no_3>no_1 && no_3>no_2){
          cout<<"Number 3 is the Largest";
     }else{
          cout<<"Error";
     }
  
     return 0;
}
