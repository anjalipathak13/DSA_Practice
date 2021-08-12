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
void check(Node* head)
{
	Node* temp=head;
	while(temp->next!=head&&temp->next!=0)
	{
		temp=temp->next;
		
	}
	if(temp->next==head)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
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
  check(head1);
  return 0;
}




 
   