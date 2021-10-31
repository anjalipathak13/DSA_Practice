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
int minimum_element(Node* root)
{
	if(root==0){
	cout<<"tree is empty"<<endl;
	return -1;
       }
else if(root->left==0){
return root->data;}
return minimum_element(root->left);
	
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
 int min= minimum_element(root);
 cout<<"minimum element"<<min<<endl;
  return 0;
}




 
   