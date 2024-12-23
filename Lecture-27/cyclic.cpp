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
int lengthll(node*head){
    int ans=0;
    while(head!=NULL){
        ans++;
        head=head->next;
    }
    return ans;
}
///////insertion in linked list////////
void insertatend(node*&head,node *&tail,int data){
    if(head==NULL){
        node*n=new node(data);
        head=tail=n;
    }
    else{
        node*n=new node(data);
        tail->next=n;
        tail =n;
    }

}
node*middle(node*head){
    if(head==NULL ||  head->next==NULL){
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
    node*nh;
    if(a->data>b->data){
        nh=b;
        nh->next=mergell(a,b->next);
    }
    else{
        nh=b;
        nh->next=mergell(a,b->next);
    }
    return nh;
}
node*mergesort(node*head){
    //base case

    //recursive case
    //1.divide 
    node*m=middle(head);
    node*a=head;
    node *b=m->next;
    m->next=NULL;
    //2.sort
    a=mergesort(a);
    b=mergesort(b);
    //3.merge 
    node*nh=mergell(a,b);
    return  nh;

}
/////////////////////////bubble sort in linked list/////
void bubblesort(node*&head){
    int n=lengthll(head);
    for(int i=0;i<n-1;i++){
        node*c=head,*p=NULL;
        node*n;
        while(c!=NULL and c->next!=NULL){
            n=c->next;
            if(c->data>n->data){
                //swapping hogi 
                if(p==NULL){
                    //head bhi change hoga
                    c->next=n->next;
                    n->next=c;
                    head=p=n;
                }
                else{
                    //head change nhi hoga
                    p->next=n;
                    c->next=n->next;
                    n->next=c;
                    p=n;
                }
            }
            else{
                //swapping nhi hogi 
                p=c;
                c=n;

            }
        }
    }
}
void breakcycle(node*head,node*fast){
    node*slow=head;
    node*p=head;
    while(p->next!=fast){
        p=p->next;
    }
    while(fast!=slow){
        p=fast;
        fast=fast->next;
        slow=slow->next;
    }
    p->next;
}
bool iscyclic(node*head){
    //floyd cycle detection  algorithm
    node*fast=head,*slow=head ;
    while(fast!=slow){
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
            breakcycle(head,slow);
            return true;
        }    
    }
    return false;
}
int main(){
    return 0;
}