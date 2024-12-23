#include<iostream>
#include<list>//this will create doubly linked list
//NULL <--1<-->2<-->3<-->4-->NULL
using namespace std;
int main(){
    list<int> l;
 //insertion in linked list
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    //printing the linked list
    cout<<"NULL--";
    for(int d:l){
        cout<<d<<"--";

    }
    cout<<"NULL"<<endl;
    //iteration on linked list using operator
    //iterator are used to iterate over the container
    //container are no
    cout<<"NULL --\n";
    for(auto x=l.begin();x!=l.end();x++){
        cout<<*x<<"--";
    }
    cout<<"NULL \n";
    return 0;
}