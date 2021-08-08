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
void loop(Node* head1)
{
  Node* slow=head1;
  Node* fast=head1;
  int f=0;
  if(head1==0||head1->next==0)
  cout<<"false"<<endl;
  while(fast->next!=0&&fast->next->next==0)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
    f=1;
    cout<<"true"<<endl;
    }
    
  }
  if(f==0)
  cout<<"false"<<endl;
  
  

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

  loop(head1);
  
  
  return 0;
}




 
   