#include<bits/stdc++.h>
using namespace std;
int main(){
      int n,dup1 ,digit=0,lastdigit,result=0;
      cout <<"Enter the value of n : ";
      cin>>n;
   
      dup1=n;
      // count no. of digit
      while(dup1>0){
         digit++;
         dup1 /= 10;
      }
      dup1=n;  
      
     // check the no is armstrong 
      while(dup1>0){
         lastdigit=dup1%10;
         int res=1;
         for(int i=0;i<digit;i++){
           res=res*lastdigit;   
         }
         result +=res;
         dup1 /= 10;
         
      }

      if(result==n) cout<<"Armstrong Number";
      else cout<<"Not a Armstrong Number";

   return 0;
}