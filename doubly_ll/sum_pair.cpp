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
	
	void sum_pair(node* head ,int k)
	{
		node* tail=head;
		while(tail->next!=0)
		tail=tail->next;
		int f=0;
		while(head!=tail && tail->next!=head)
		{
			if(head->data+tail->data==k){
			f=1;
			cout<<head->data<<","<<tail->data<<endl;
			head=head->next;
			tail=tail->prev;
			}
			else if(head->data+tail->data>k)
			     tail=tail->prev;
			     else
			     head=head->next;
		}
		if(f==0)
		cout<<"no pair exist"<<endl;
			
			
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
	    sum_pair(head,k);
		return 0;
		
			}	
	