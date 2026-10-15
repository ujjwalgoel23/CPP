#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"PRINTING NO. OF DIGITS \n";
    int n,count=0;
    cout<<"Enter Any Number : ";
    cin>>n;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"The number of digits are :"<<count;
    return 0;
}
