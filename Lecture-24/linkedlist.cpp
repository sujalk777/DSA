#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};
////////////////INSERTION IN LINKED LIST 
void insertatfront(node* &head,node* &tail, int data){
    if(head==NULL){
        //linked list is empty 
        node*n=new node(data);
        head=tail=n;
    }  
    else{
        node*n=new node(data);
        n->next=head;
        head=n;
    }
}
void insertatend(node*&head,node*&tail,int data){
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
void insertatmiddle(){}
////////////print the list
void printLL(node*temp){
    while(temp !=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main(){
    node* head,*tail;
    //pointer mei garbage nahi rakhte 
    head=tail=NULL;
    insertatfront(head,tail,1);
    return 0;
}