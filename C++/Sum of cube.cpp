#include<iostream>
using namespace std;

int main(){
    int n,i,s,sum;
    cout<<"Enter the value of n: ";
    cin>>n;
    s = 0;
    sum = 0;
    for(i=1;i<=n;i++){
        s = i*i*i;
        sum = sum + s;
    }
    cout<<"Sum of cubes till n= "<<n<<" is : "<<sum;
    return 0;
}
