#include<bits/stdc++.h>
using namespace std;
class Node{

public:
    int data;
    Node *left,*right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};
// Preorder build of the Tree root,left,right tree
Node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node* n=new Node(d);
    n->left=buildtree();
    n->right=buildtree();
    return n;
}
void printPreorder(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    Node *root=buildtree();
    printPreorder(root);
    return 0;
}