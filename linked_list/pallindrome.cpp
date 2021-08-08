
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
Node* reverse(Node* head)
{
  Node* prev=0;
  Node* curr=head;
  Node* next=head;
  while(next!=0)
  {  
    next=next->next;
    curr->next=prev;
    prev=curr;
    curr=next;

  }
  return prev;
}

bool pallin(Node* head,int n)
{
  Node* slow=head;
  Node* fast=head;
  //finding middle
  if(head!=0){
  while(fast->next!=0 && fast->next->next!=0)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  }
  //reverseright half
  slow->next=reverse(slow->next);
  slow=slow->next;
  while(slow!=0)
  {
    if(head->data!=slow->data)
    return false;
    head=head->next;
    slow=slow->next;
  }
 return true; 
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
  if(pallin(head,n)==true)
  cout<<"pallindrome linked list"<<endl;
  else
  cout<<"not a pallindrome linked list"<<endl;
  
  return 0;
}



    

 
   