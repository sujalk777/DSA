#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=1){
        cout<<0<<endl;
    }
    if(n>=2){
        cout << 1 <<" "<< 1 <<endl;
    }
    int a=1,b=1,c=2;
    for(int row=3;row<=n;row++){
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
    cout<<endl;
    return 0;
    
        
    
}