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
Node* reverse_k(Node* head,int k)
{
  Node* prev=0;
  Node* curr=head;
  Node* next;
  int c=0;
  while(curr!=0&&c<k)
  {  
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    c++;

  }
  if(next!=0){
  head->next=reverse_k(next,k);
  }
  return prev;
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
  int k;
  cout<<"enter k to reverse"<<endl;
  cin>>k;
  head=reverse_k(head,k);
  print(head);
  return 0;
}



    

 
   