#include<iostream>
#include<stack>
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
void pre(node* root)
{   
	stack<node*>s;
	s.push(root);
	while(!s.empty())
	{
	node* f=s.top();
	cout<<f->data;
	s.pop();
	if(f->right!=NULL)
	s.push(f->right);
	if(f->left!=NULL)
	s.push(f->left);
	
	}
}



int main(){
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(7);
	root->left->left=new node(3);
	root->left->right=new node(4);
	root->left->right->left= new node(5);
	root->left->right->right= new node(6);
	pre(root);
	return 0;
}
