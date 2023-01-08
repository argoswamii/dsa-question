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

void insert(node* &head, int d){
	if(head==NULL){
		head=new node(d);
		return;
	}

	node* n=new node(d);
	n->next=head;
	head=n;
}

void print(node* head){
	if(head==NULL){
		return;
	}

	while(head != NULL){
		cout<<head->data<<"->";
		head=head->next;
	}cout<<"NULL";
	return;
}

int length(node* head){
	int len=0;
	node* temp=head;
	while(temp !=NULL){
		len++;
		temp=temp->next;
	}
		return len;
}

void attail(node* head, int d){
	if(head==NULL){
		head=new node(d);
		return;
	}

	node* temp=head;
	while(temp->next != NULL){
		temp=temp->next;
	}

	temp->next=new node(d);
	return;
}

 node* mid(node* head){
	if(head==NULL) return 0;

	node* slow=head;
	node* fast=head;

	while(head != NULL and fast->next != NULL ){
		fast=fast->next->next;
		slow=slow->next;
	}

	return slow;
}

bool serch(node* &head, int value){
	if(head==NULL) return false;

	node* temp= head;

	while(temp!=NULL){
		if(temp->data==value) return true;
		temp=temp->next;
	}
	return false;
}

bool reserch(node* head, int value){
	node* temp=head;

	if(temp==NULL) return false;
	if(head->data==value) return true;
	else{
		return reserch(temp->next, value);
	}

}

void reversll(node* &head){
	node* current=head;
	node* nxtptr;
	node* pre=NULL;

	while(current!=NULL){
		nxtptr=current->next;
		current->next=pre;

		pre=current;
		current=nxtptr;
	}
		head=pre;

}

void createcycle(node* &head){

	node* temp=head;

	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head->next->next;
}

bool isloop(node* head){
	node* fast=head;
	node* slow=head;

	while(fast->next!=NULL && fast!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return true;
		}
	}

	return false;
}

void breakcycle(node* head){
	node* fast=head;
	node* slow=head;

	while(fast->next!=NULL && fast!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			break;
		}
	}


	slow=head;
	node* perivous=head;

	while(perivous->next!=fast){
		perivous=perivous->next;
	}

	while(slow!=fast){
		slow=slow->next;
		perivous->next;
		fast=fast->next;
	}
	perivous->next=NULL;

}

int main(){
	node* head=NULL;

	insert(head,6);
	insert(head,5);
	insert(head,4);
	insert(head,3);

	attail(head,7);
	attail(head,8);
	attail(head,9);

	print(head);
	cout<<endl;

	cout<<length(head)<<endl;

	cout<<mid(head)<<endl;

	cout<<reserch(head, 9);

	reversll(head);
	cout<<endl;
	print(head);
	cout<<endl;

	createcycle(head);

	cout<<isloop(head);
	cout<<endl;

	breakcycle(head);

	cout<<isloop(head);






}