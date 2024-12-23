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
/////////////LENGTH OF LL///////////////////////
int lengthll(node*head){
    int ans=0;
    while(head!=NULL){
        ans++;
        head=head->next;

    }
    return ans;
}
////////////////insertionatfron 
void insertatfront(node *&head,node *&tail,int data){
    if(head==NULL){
        //naya banan padega bro
        node *n=new node(data);
        head=tail=n;
    }
    else{
        node*n=new node(data);
        n->next=head;
        head=n;
    }
}
void insertatend(node *&head,node *&tail,int data){
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
void insertatmiddle(node*&head,node*&tail,int pos,int data){
    if(pos==0){
        insertatfront(head,tail,data);
    }
    else if(pos>=lengthll(head)){
        insertatend(head,tail,data);
    }
    else{
        node*t=head;
        for(int i=1;i<=pos-1;i++){
            t=t->next;
        }
        node*n=new node(data);
        n->next=t->next;
        t->next=n;
    }
}
void deleteatfront(node *&head,node *&tail){
    if(!head){
        //cout<<"khaali peeli kyu ungli kar rha hai\n"
        return;            
    }
    else if(!head->next){
        delete head;
        head=tail=NULL;
    }
    else{
        node*t=head;
        head=head->next;
        delete t;
    }
}
void deleteatend(node*&head,node*&tail){
    if(!head){
        return;
        //cout<<"khaali peeli kyu ungal kar rha hai"
    }
    else if(!head->next){
        delete head;
        head=tail=NULL;
    }
    else{
        node *t=head;
        while(t->next!=tail){
            t=t->next;
        }
        delete tail;
        tail=t;
        tail->next=NULL;
    }
}
void deleteatmiddle(node *&head,node*&tail,int pos){
    if(pos==0){
        deleteatfront(head,tail);
    }
    else if(pos>=lengthll(head)-1){
        deleteatend(head,tail);
    }
    else{
        node*t=head;
        for(int i=1;i<=pos-1;i++){
            t=t->next;
        }
        node*n=t->next;
        t->next=n->next;
        delete n;
        
    }
}
void reversell(node*head,node*tail){
    node*c=head;
    node*p=NULL;
    node *n;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    swap(head,tail);
}
void reversellrec(node*c,node *p=NULL){
    //base case 
    if(c==NULL){
        return;
    }

    //recursive case 
    node*n=c->next;
    c->next=p;
    reversellrec(n,c);
    
}

void printll(node*temp){
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;

    }
}
int main(){}