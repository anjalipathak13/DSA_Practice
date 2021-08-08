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
Node* sum(Node* head1,int n,Node* head2,int n1)
{

  
  int sum=0;
  
  int carry=0;
  Node* dummy=new Node();
    Node *temp=dummy;

  while(head1!=0||head2!=0||carry!=0)
  { 
    sum=0;
    if(head1!=0)
    {
      sum+=head1->data;
      head1=head1->next;

    }
    if(head2!=0)
    {
      sum+=head2->data;
      head2=head2->next;


    }sum+=carry;
    carry=sum/10;
    Node* newnode=new Node();
    newnode->data=sum%10;

    temp->next=newnode;
    temp=temp->next;
    
     
  }
  
  return dummy->next;

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
  finalhead=sum(head1,n,head2,n1);
  print(finalhead);
  
  return 0;
}


//li= 2-->4-->3-->0
//l2=5-->6-->7-->9-->0
//sum=7-->6-->7-->9-->0
    

 
   