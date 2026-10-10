// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//  public:
//   int data;
//   Node* next;
//   Node(int value){
//     data=value;
//     next=NULL;
//   }
// };

// int main(){
//  int arr[5]={1,2,3,4,5};
//   Node *head=NULL;
//   Node *tail=NULL;
//   for(int i=0;i<5;i++){
//     if(head==NULL){
//       head=new Node(arr[i]);
//       tail=head;
//     }
//     else{
//       tail->next=new Node(arr[i]);
//       tail=tail->next;
//     }
//   }
//  //traversing LL
//  Node* temp=head;
//  while(temp!=NULL){
//  cout<<temp->data<<" ";
//  temp=temp->next;
//  }

// return 0;
// }

//INSERT NODE AT END USING RECURSION--->
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
//traversing LL
 node* temp=head;
 while(temp!=NULL){
 cout<<temp->data<<" ";
 temp=temp->next;
 }
return 0;
}