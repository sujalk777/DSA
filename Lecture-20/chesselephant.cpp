#include<iostream>
using namespace std;
int chessele(int r,int c){
    //base case 
    if(r==0 and c==0){
        return 1;
    }
    if(r<0 ||c<0){
        return 0;
    }

    //recursive case
    int ans=0;
    for(int i=0;i<r;i++){  
        ans+=chessele(i,c);
    }
    for(int i=0;i<c;i++){
        ans+=chessele(r,i);
    }
    return ans;

}
int main(){
    cout<<chessele(2,2)<<endl;
    return 0;
}