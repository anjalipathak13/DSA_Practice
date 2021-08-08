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
Node* merge(Node* head1,int n,Node* head2,int n1)
{
  Node *t;
  Node* res;
  if(head1==0)
  return head2;
  if(head2==0)
  return head1;
  res=head1;
  if(head1->data>head2->data)
  {
    t=head1;
    head1=head2;
    head2=t;
  }while(head1!=0&&head2!=0){
  Node* temp=0;
  while(head1!=0&&head1->data<=head2->data)
  {
    temp=head1;
    head1=head1->next;
  }
temp->next=head2;
t=head1;
head1=head2;
head2=t;
  }
  return res;

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
 Node* head1=0;
 Node* head2=0;
 Node* finalhead=0;
  cout<<"How many numbers"<<endl;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++){
  cout<<"enter the number"<<endl;
  cin>>x;
  head1=insertatlast(head1,x);
  }
  print(head1);
  cout<<endl;

  cout<<"How many numbers"<<endl;
  int n1,x1;
  cin>>n1;
  for(int i=0;i<n1;i++){
  cout<<"enter the number"<<endl;
  cin>>x1;
  head2=insertatlast(head2,x1);
  }
  print(head2);
  cout<<endl;
  finalhead=merge(head1,n,head2,n1);
  print(finalhead);
  
  return 0;
}



    

 
   