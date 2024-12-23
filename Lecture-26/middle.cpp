#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
/////////////length of linked list/////////////
int lengthll(node*head){
	int ans=0;
	while (head!=NULL){
		ans++;
		head=head->next;

	}
	return ans;
}
//////////////////insertion at ll///////////////
void insertatend(node*&head,node *&tail,int data){
	if(head==NULL){
		node*n=new node(data);
		head=tail=n;
	}
	else{
		node*n=new node(data);
		tail->next=n;
		tail=n;
	}
}
////////////insertion at midlle ///////////////////////
node *midll(node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	node*slow=head;
	node*fast=head->next;
	while(fast!=NULL and fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
node*mergell(node*a,node*b){
	if(!a){
		return b;
	}
	if(!b){
		return a;
	}
	node *nh;
	if(a->data<b->data){
		nh=a;
		nh->next=mergell(a->next,b);
	}
	else {
		nh=b;
		nh->next=mergell(a,b->next);
	}
	return nh;
}
node*mergesort(node*head){
	//base case  
	if(!head ||!head->next){
		return head;
	}

	//recursive case 
	//1.divide
	node*m=midll(head);
	node*b=m->next;
	node *a=head;
	m->next=NULL;
	//2.sort
	a=mergesort(a);
	b=mergesort(b);
	//3.merge
	node*nh=mergell(a,b);
	return nh;
}
void printll(node*temp){
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<"NULL\n";

}
int main(){
	node*tail;
	node*head;
	head=tail=NULL;
	insertatend(head,tail,1);
	insertatend(head,tail,5);
	insertatend(head,tail,6);
	insertatend(head,tail,7);
	insertatend(head,tail,8);
	insertatend(head,tail,4);
	insertatend(head,tail,2);
	printll(head);
	node*nh=mergesort(head);
	printll(nh);
	return 0;
}
