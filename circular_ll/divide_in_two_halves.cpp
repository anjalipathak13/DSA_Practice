#include<iostream>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
void print(Node* head);
Node* insertatlast(Node *head,int x)
{
 Node* temp1=head;
  Node* temp=new Node();
  temp->data=x;
  temp->next=0;
  if(head==0){
  head=temp;
  temp->next=head;
  }
  else{
  while(temp1->next!=head)
  temp1=temp1->next;
  temp1->next=temp;
  temp->next=head;
  
  }
  
  return head;

}
void two_halves(Node* head)
{
	Node* slow =head;
	Node* fast= head;
	Node* second;
	while(fast->next!=head&&fast->next->next!=head)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	
	//cout<<slow->data<<endl;
	second=slow->next;
	Node* head2=second;
	slow->next=head;
	print(head);
	cout<<endl;
	while(second!=head)
	{
		second =second->next;
	}second->next=head2;
	Node* temp=head2;
	while(temp->next!=head2)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
	
	
	
	
}

void print(Node* head)
{   Node* temp=head;
    while (temp->next!= head) {
        cout << temp->data << " ";
        temp = temp->next;
    }cout<<temp->data;
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
 two_halves(head1);
  return 0;
}




 
   