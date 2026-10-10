#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node(int value){
    data=value;
    next=NULL;
    }
};

int main() {
    // creating single node
    Node *head;
    head=new Node(10);
    cout<<"head->data : "<<head->data<<endl;
    cout<<"haed->next : "<<head->next<<endl;
return 0;
}