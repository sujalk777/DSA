#include<iostream>
#include<queue>
using namespace std;
class stack{
    queue<int> q1;
    queue<int> q2;
public:
    void push(int d){
        if(q1.empty() and q2.empty()){
            q1.push(d);
        }
        else if(!q1.empty() and q2.empty()){
            q2.push(d);
        }
        else{
            q2.push(d);
        }

    }
    void pop(){
        if(!q1.empty() and q2.empty()){
            while(q1.size()>1){
                int f=q1.front();
                q2.push(f);
                q1.pop();
            }
            q1.pop();
        }
        if(q1.empty() and !q2.empty()){
            while(q2.size()>1){
                int f=q1.front();
                q1.push(f);
                q2.pop();
            }
            q2.pop();
        }
    }
    bool empty(){
        if(q1.empty() and q2.empty()){
            return true;
        }
    }
    int top(){
        if(!q1.empty() and q2.empty()){
            while(q1.size()>1){
                int f=q1.front();
                q2.push(f);
                q1.pop();
            }
            int f=q1.front();
            q1.pop();
            q2.push(f);
            return f;
        }
        else{
            while(q2.size()>1){
                int f=q2.front();
                q2.pop();
                q1.push(f);
            }
            int top=q2.front();
            q1.push(top);
            q2.pop();
            return top;
        }
    }
};
int main(){
    stack q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    while(!q1.empty()){
        cout<<q1.top()<<"  ";
        q1.pop();
    }
    return 0;
}