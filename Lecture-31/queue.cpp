#include<iostream>
using namespace std;
template<typename T>
class queue{
    T*a;
    int f,e,cs,n;
public:
    queue(int size){
        n=size;
        a=new T[n];
        f=cs=0;
        e=n-1;
    }    
    void push(T d){
        if (cs<n){
            e=(e+1)%n;
            a[e]=d;
            cs++;
        }
        else{
            cout<<"Overflow\n";
        }
    }
    void pop(){
        if(cs>0){
            f=(f+1)%n;
            cs--;
        }
        else{
            cout<<"underflow\n";
        }
    }
    bool empty(){
        return cs==0;
    }
    int size(){
        return cs;
    }
    T front(){
        return a[f];
    }
}; 
int main(){
    queue<int> q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    return 0;
}