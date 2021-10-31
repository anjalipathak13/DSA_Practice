#include<iostream>
#include<algorithm>

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
int depth(node * root);
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
	
}
bool balance(node* root)
{
	if(depth(root)==-1)
	return false;
	else
	return true;
	
	
}
int  depth(node* root)
{
	
	
	if(root==NULL)
	return 0;
    int l=depth(root->left);
    if(l==-1)
    return -1;
    
    int r=depth(root->right);
    if(r==-1)
    return -1;
    if(abs(l-r)>1)
    return -1;
    return 1+max(l,r);
	
	
}
int main(){
	node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
//	root->left->left=new node(4);
//	root->left->left->left=new node(5);
//	root->left->left->left->left=new node(6);
//	root->right->right=new node(6);
	if(balance(root)==true)
	cout<<"balanced"<<endl;
	else
	cout<<"not balanced"<<endl;
	return 0;
}
