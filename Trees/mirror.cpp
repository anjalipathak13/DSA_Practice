#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node* left;
	node* right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
void level_order(node* root)
{
	
	
	if(root==0)
	return;
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		node* current=q.front();
		q.pop();
		cout<<current->data<<" ";
		if(current->left!=0)
		q.push(current->left);
		if(current->right!=0)
		q.push(current->right);	
		
	}	
}
void swap(node* root)
{
	if(!root)
	return;
swap(root->left);
swap(root->right);
node* t;
t=root->left;
root->left=root->right;
root->right=t;	
}
node* mirror(node* root)
{
	swap(root);
	return root;
	
	
}


int main(){
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->right->right=new node(6);
	level_order(root);
	mirror(root);
	cout<<endl;
	level_order(root);
	return 0;
}
