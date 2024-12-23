#include<iostream>
using namespace std;
int main(){
    string s="abcdef";
    for(int i=0;i<s.size();i++){
        cout<<s.substr(0,i)<<" "<<s.substr(i+1)<<endl;
    }
    return 0;
}