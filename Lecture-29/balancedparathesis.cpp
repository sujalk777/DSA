#include<iostream>
#include<stack>
using namespace std;
bool isbalanced(string x){
    stack<char> s;
    for (int i=0;i<x.size()-1;i++){
        char ch=x[i];
        switch(ch){
        case '(':
        case '{':
        case '[':
            s.push(ch);
            break;
        case '}':
            if(!s.empty() and s.top()=='{'){
                s.pop();
            }    
            else{
                return false;
            }
            break;
        case ')':
            if(!s.empty() and s.top()=='('){
                s.pop();
            }    
            else{
                return false;
            }
            break;
        case ']':
            if(!s.empty() and s.top()=='['){
                s.pop();
            }    
            else{
                return false;
            }
            break;        
        }
        

        
    }
}