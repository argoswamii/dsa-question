#include<bits/stdc++.h>
using namespace std;

class node
{
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



node* buildTree() {
	int x;
	cin >> x;

	if (x == -1) {
		return NULL;
	} else {
		node* root = new node(x);
		root->left = buildTree();
		root->right = buildTree();
		return root;
	}
}



void preorder(node* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) {
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void inorder(node* root){
	if(root==NULL)return;

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);

}

int main(){
	node* root = buildTree();
	preorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	// levelordert(root);


	return 0;
}