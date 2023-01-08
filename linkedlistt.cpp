#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data=d;
		next=NULL;
	}

};

void insertathead(node* &head, int data){

	if(head==NULL){
		head = new node(data);
		return;
	}

	node* n=new node(data);
	n->next=head;
	head=n;

}

void insertattail(node* head, int d){
	if(head==NULL){
		head=new node(d);
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
		temp->next=new node(d);
		return;
}

void printll(node* &head){
	if(head==NULL) return;
	
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}

}

int main(){
	node* head=NULL;

	insertathead(head, 3);
	insertathead(head, 4);
	insertathead(head, 5);
	insertattail(head, 2);

	printll(head);

	return 0;
}