#include<iostream>
using namespace std;
int add(int x,int y){
    int sum=x+y;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c=add(a,b);
    if(c%2==0){
        cout<<"sum even hai"<<endl;
    }
    else{
        cout<<"sum odd hai"<<endl;
    }

    
    return 0;
}
