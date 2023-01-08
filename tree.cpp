#include <bits/stdc++.h>
using namespace std;

class node{
public:
		int data;
		node* left;
		node* right;

		node(int d){
			data=d;
			left=NULL;
			right=NULL;
		}
};

node* buildtree(){
	int x;
	cin>>x;
	if(x==-1) return NULL;
	else{
		node* root=new node(x);
		root->left = buildtree();
		root->right = buildtree();
		return root;
	}
}

void preorder(node* root){
	if(root == NULL) return;

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}


int main(){
	node* root = buildtree();
	preorder(root);
	
}