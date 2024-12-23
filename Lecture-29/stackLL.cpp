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
class stack{
    node*head;
public:
    stack(){
        head=NULL;
    }
    void push(int d){
        node*n=new node(d);
        n->next=head;
        head=n;
    }
    void pop(){
        if(!head){
            return;
        }
        else{
            node*n=head;
            head=head->next;
            delete n;
        }
    }
    bool empty(){
        return head=NULL;
    }
    int top(){
        return head->data;
    }
};
int main(){
    return 0;
}