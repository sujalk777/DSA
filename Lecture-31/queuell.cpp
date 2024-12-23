#include<iostream>
using namespace std;
template<typename U>
class node{
public:    
    U data;
    node<U>*next;
    node(U d){
        data=d;
        next=NULL;
    }
};
template<typename T>
class queue{
    node<T>*head;
    node<T>*tail;
    int cs;
public:
    queue(){
        head=tail=NULL;
        cs=0;
    }
    void push(T data){
        cs++;
        if (!head){
            head=tail=new node<T>(data);
        }
        else{
            node<T>*n=new node<T>(data);
            tail->next=n;
            tail=n;
        }
    }
    void pop(){
        if(!head){
            return;
        }
        else if(head->next==NULL){
            delete head;
            head =tail=NULL;
            cs--;
        }
        else{
            node<T>*temp=head;
            head=head->next;
            delete temp;
            cs--;
        }
    }
    T front(){
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
    int size(){
        return cs;
    }
};
int main(){
    queue<char> q;
	// q.push(1);
	// q.push(2);
	// q.push(3);
	// q.push(4);
	// q.push(5);
	q.push('F');
	q.push('U');
	q.push('C');
	q.push('K');

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

    return 0;
}