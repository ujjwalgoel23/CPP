#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit,reverse=0,temp;
    cout<<"enter any number : ";
    cin>>n;
    temp=n;
    while(temp>0){
        lastdigit=temp%10;
        reverse=(reverse*10)+lastdigit;
        temp=temp/10;
    }
    if(reverse==n) cout<<n <<" is a Palindrome Number";
    else  cout<<n <<" is not a Palindrome Number";
    

    return 0;

}