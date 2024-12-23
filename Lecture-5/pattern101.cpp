#include<iostream>
using namespace std;
int main(){
    int n,row,x,col,space;
    cin>>n;
    for(space=1;space<=n;space++){
        cout<<" ";
        
    }
    for(row=1;row<=n;row++){
        x=row%2;
        for(col=1;col<=row;col++,x=1-x){
            cout<<x<<" ";

        }
        cout<<endl;

    }
    return 0;



}