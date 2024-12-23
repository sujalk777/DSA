#include<iostream>
using namespace std;
int main(){
    int n,row,space;
    cin>>n;
    for(row=0;row<=n;row++){
        for(space=1;space<=n-row;space++){
            cout<<" ";
            }
    }

}