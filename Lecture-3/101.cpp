#include<iostream>
using namespace std;
int main(){
    int n,row,col,x;
    cin>>n;
    for(row=1;row<=n;row++){
        x=row%2;
        for(col=1; col<=row;col++ , x=1-x) {
            cout<<x<<" ";

        }
        cout<<endl;


    }
    return 0;

}