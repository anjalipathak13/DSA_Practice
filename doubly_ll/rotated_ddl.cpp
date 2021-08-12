#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* prev;
	node* next;
};
node* insertnode(node* head,int x)
{   node* tail=head;
    node* newnode = new node();
    newnode->data=x;
    newnode->prev=0;
    newnode->next=0;
    
	if(head==0)
	{
		head=newnode;
		
	}else
	{
	  while(tail->next!=0)
	    tail=tail->next;
	  	newnode->prev=tail;
	  	tail->next=newnode;
	  	
		  }
		  return head;
	}
	
node* rotate(node* head,int k)
{
  
  node* temp=head;
  node* tail=head;
  while(tail->next!=0)
  tail=tail->next;
  while(k>0)
  { 
  temp=head;
 	head=temp->next;
  	tail->next=temp;
  	temp->prev=tail;
  	
  	head->prev=0;
  	temp->next=0;
  	tail=temp;
  	
  	k--;
  	
  	
  }
  	
return head;	
	
	
	
}
	void print(node* head)
	{
		node* temp=head;
		while(temp!=0)
		{
		cout<<temp->data;
		temp=temp->next;
	    }
	
	}
	
	
int main()
{
	node* head=0;
	int n,x;
	
	cout<<"enter no of node"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
    {   cout<<"enter data"<<endl;
    	cin>>x;
    	head=insertnode(head,x);
    	
		}
		cout<<"print doubly linkedlist"<<endl;
		print(head);
	    cout<<"enter value to be find"<<endl;
	    int k;
	    cin>>k;
	    head=rotate(head,k);
	    print(head);
		return 0;
		
			}	
	