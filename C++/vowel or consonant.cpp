#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Letter : ";
    char a;
    cin>>a;
    cout<<a;
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        cout<<" is Vowels";
    }else{
        cout<<" is Consonants";
    }
  
    return 0;
}
