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
Node* duplicate(Node* head,int n)
{ Node* temp=head;
  Node* temp1=head;

  while(temp->next!=0)
  {
    if(temp->data!=temp->next->data)
    {
         temp=temp->next;
    }
    else
    {
      temp1=temp->next->next;
      
      free(temp->next);
      temp->next=temp1;
    }
  }
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
  head=duplicate(head,n);
  print(head);
  
  return 0;
}



    

 
   
