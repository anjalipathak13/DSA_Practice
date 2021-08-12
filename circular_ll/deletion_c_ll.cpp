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
Node* deletion_at_beg(Node* head){
	Node* temp=head;
	Node* tail=head;
	while(tail->next!=head)
	{
		tail=tail->next;
	}
	head=temp->next;
	tail->next=head;
	delete temp;
	return head;	
}
Node* deletion_at_end(Node* head)
{
	Node* temp=head;
	Node* temp2;
	while(temp->next->next!=head)
	{
		temp=temp->next;
		
	}
	temp2=temp->next;
	temp->next=head;
	delete temp2;
	return head;
	
}
Node* deletion_at_pos(Node* head,int pos)
{
  if(pos==1)
  {
  	head=deletion_at_beg(head);
  	return head;
	  }	
	  int i=1;
	  Node* temp=head;
	  while(i<pos)
	  {
	  	temp=temp->next;
	  	i++;
	  } 
	  Node* temp2=temp->next;
	  
	  temp->next=temp2->next;
	  delete temp2;

	  return head;
	
	
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
 head1=deletion_at_beg(head1);
 print(head1);
 cout<<endl;
 head1=deletion_at_end(head1);
 print(head1);
 cout<<"enter the position"<<endl;
 int pos;
 cin>>pos;
 if(pos==n)
 head1=deletion_at_end(head1);
 else
  head1=deletion_at_pos(head1,pos-1);
 print(head1);
  return 0;
}




 
   