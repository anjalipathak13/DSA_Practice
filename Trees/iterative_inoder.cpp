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
void inorder(node* root)
{    
    node* temp=root;
	stack<node*>s;
    while(true)
    {
    	if(temp!=NULL){
    	s.push(temp);
    	temp=temp->left;
         }
         else
         {
         	if(s.empty()==true)
         	break;
         	temp=s.top();
         	s.pop();
         	cout<<temp->data;
         	temp=temp->right;
        
         	
		 }
    	
    	
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
	inorder(root);
	return 0;
}
