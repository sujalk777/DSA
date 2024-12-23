#include<iostream>
using namespace std;
void print2d(int a[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
}
void waveprint(int a[][100],int n,int m){
    for(int col=0;col<m;col++){
        if(col%2==0){
            for(int row=0;row<n;row++){
                cout<<a[row][col]<<" ";
            }
        }
        else{
            for(int row=n-1;row>=0;--row){
                cout<<a[row][col]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int r,c,n,m;
    int a[100][100];
    cout<<"enter row and column";
    cin>>n>>m;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=num;
            num++;
        }
    }
    print2d(a,n,m);
    waveprint(a,n,m);
    
    return 0;
}