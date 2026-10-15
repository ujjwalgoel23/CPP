#include<bits/stdc++.h>
using namespace std;
int main(){
  int num1,num2,res;
  cout<<"enter two number:";
  cin>>num1>>num2;
int n=min(num1,num2);
for(int i=1;i<=n;i++){
    if(num1%i==0 && num2%i==0) res=i;
}

cout<<"GCD:" <<res;
    return 0;
} 