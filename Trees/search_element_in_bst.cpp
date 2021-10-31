  #include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
class Node {
public:
    int data;
    Node* left;
    Node* right;
    
};
Node* create_newnode(int x)
{
	Node* newnode= new Node();
	newnode->data=x;
	newnode->left=0;
	newnode->right=0;
	return newnode;
}


Node* insert(Node *root,int x)
{
	if(root==0)
	root = create_newnode(x);
	else if(x<=root->data)
	root->left=insert(root->left,x);
	else
	root->right=insert(root->right,x);
	
}
bool search(Node* root,int n)
{
	if(root==0)
	return false;
	if(root->data==n)
	return true;
	else if(root->data<=n)
	return search(root->right,n);
	else
	return search(root->right,n);
}
int main()
{
 Node* root=0;
 
  root=insert(root,1);
  root=insert(root,2);
  root=insert(root,3);
  root=insert(root,4);
  root=insert(root,5);
  root=insert(root,30);
  cout<<"enter the data to be searched"<<endl;
  int n;
  cin>>n;
  if(search(root,n)==true)
  cout<<"element found"<<endl;
  else
  cout<<"not found"<<endl;
  return 0;
}




 
   