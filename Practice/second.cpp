#include<bits/stdc++.h>
using namespace std;
 int main(){
    
    int n,lastdigit,result=0;
    cout<<"Enter any number :";
    cin>>n;
    while(n>0){
        lastdigit=n%10;
        result=(result*10)+lastdigit;
        n=n/10;
    }
 cout<<"The Reverse of a Number is : "<< result;
    return 0;
 }
