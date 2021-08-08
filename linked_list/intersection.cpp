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
void intersection(Node* head1,int n,Node* head2,int n1)
{
  //if(head1==0||head2==0)
  
  Node* l1=head1;
  Node* l2=head2;
  while(l1!=l2)
  {
    l1=l1==0?head2:l1->next;
    l2=l2==0?head1:l2->next;
  }
  cout<<l1->data<<endl;

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
  intersection(head1,n,head2,n1);
  
  
  return 0;
}