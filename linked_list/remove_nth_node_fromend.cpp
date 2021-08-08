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
Node* remove(Node* head,int k,int n)
{
  Node * temp=head;
  Node * prev=temp;
  int t=n-k;
  if(t==0)
  {
  free(head);}
  else{
    while(t>0)
    { prev=temp;
      temp=temp->next;
      t--;

    }prev->next=temp->next;
    free(temp);
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
  cout<<"enter the nth node number"<<endl;
  int k;
  cin>>k;
  print(head);
  cout<<endl;
  head=remove(head,k,n);
  print(head);
  return 0;
}



    

 
   