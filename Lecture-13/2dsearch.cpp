#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n,m,r,c,key;
    cout<<"enter row and column";
    cin>>n>>m;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<"enter key";
    cin>>key;
    for(r=0;r<n;r++){
        for(c=0;c<m;c++){
            if(a[r][c]==key){
                cout<<"key found at index:"<<r<<","<<c<<endl;
                break;
            }
        }
        if(c<m){
            break;
        }
    }
    if(r==n){
        cout<<"key not found"<<endl;
    }
    return 0;
}    




