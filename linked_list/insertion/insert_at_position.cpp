#include<bits/stdc++.h>
using namespace std;

class node
{
  public:
  int data;
  node* next;
  node(int value){
    data=value;
    next=NULL;
  }
};

node* createLL(int arr[] ,int size ,int index ){
 if(size==index) return NULL;
 node* temp = new node(arr[index]);
 temp->next= createLL(arr,size,index+1);
 return temp;
}

int main(){
  int arr[5]={1,2,3,4,5};
  node *head=NULL;
  head=createLL(arr,5,0);
  // insert at particular position
  int x=2;
  int value=10;
  node* temp=head;
  x--;
  while(x--) temp=temp->next;
  node* temp2=new node(value);
  temp2->next=temp->next;
  temp->next=temp2;

//traversing LL
  temp=head;
 while(temp!=NULL){
 cout<<temp->data<<" ";
 temp=temp->next;
 }
return 0;
}