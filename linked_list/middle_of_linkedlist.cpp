#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
Node* insertatlast(Node *head,int x)
{
 Node* temp1=head;
  Node* temp=new Node();
  temp->data=x;
  temp->next=0;
  if(head==0){
  head=temp;}
  else{
  while(temp1->next!=0)
  temp1=temp1->next;
  temp1->next=temp;
  }
  return head;

}
Node* middle(Node* head,int n)
{
  Node* slow=head;
  Node* fast=head;
  while(fast!=0)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  cout<<"Middle"<<slow->data<<endl;
  return head;
}

void print(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{
 Node* head=0;
  cout<<"How many numbers"<<endl;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++){
  cout<<"enter the number"<<endl;
  cin>>x;
  head=insertatlast(head,x);
  }
  print(head);
  cout<<endl;
  head=middle(head,n);
  
  return 0;
}



    

 
   