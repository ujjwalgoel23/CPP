// //INSERTION AT STARTING (hm array ke saare element LL ke starting me insert kra rhe hai)
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//       int data;
//       Node* next;
//       Node(int value){
//       data=value;
//       next=NULL;
//      }
// };

// int main(){
//  int arr[5]={1,2,3,4,5};
//  Node *head;
//  head=NULL;
//  for(int i=0;i<5;i++){
//     if(head==NULL){
//       head=new Node(arr[i]);
//     }
//     else{
//     Node*temp;
//     temp=new Node(arr[i]);
//     temp->next=head;
//     head=temp;
//     }
//  }
//  //traversing LL
//  Node* temp=head;
//  while(temp!=NULL){
//  cout<<temp->data<<" ";
//  temp=temp->next;
//  }
// return 0;
// }

//  INSERT NODE AT BEGINING USING RECURSION
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

node* createLL(int arr[],int index,int size,node* prev){
  if(size==index) return prev;
  node* temp=new node(arr[index]);
  temp->next=prev;
  return createLL(arr,index+1,size,temp);
}
int main(){
  int arr[5]={1,2,3,4,5};
  node* head=NULL;
  head=createLL(arr,0,5,NULL);
   //traversing LL
 node* temp=head;
 while(temp!=NULL){
 cout<<temp->data<<" ";
 temp=temp->next;
 }
return 0;
}

