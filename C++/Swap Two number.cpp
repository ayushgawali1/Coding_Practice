#include<iostream>
using namespace std;

int main(){
     int no_1,no_2,temp_no;
     cout<<"Number 1 = ";
     cin>>no_1;
     cout<<"Number 2 = ";
     cin>>no_2;
     cout<<"Number before swaping NO-1 is "<<no_1<<" NO-2 is "<<no_2<<"."<<endl;
     temp_no = no_1;
     no_1 = no_2 ;
     no_2 = temp_no;
     cout<<"Number after swaping NO-1 is "<<no_1<<" NO-2 is "<<no_2<<".";

     return 0;
}
