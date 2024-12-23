#include<iostream>
#include<vector>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    
    return fibo(n-1) +fibo(n-2);
}
int topdown(int n,int*dp){
    if(n<=1){
        dp[n]=n;//return krne se pehle store krlo
        return n;

    }
    //calculate krne se pehle check kahi already calculated toh nhi hai 
    if(dp[n]!=-1) return dp[n];
    //agar dp=-1 it mean we need to calculate it 
    int x=topdown(n-1,dp)+topdown(n-2,dp);
    dp[n]=x;
    return x;

}
int bottomup(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int dp[10000];
    for(int i=0;i<100000;i++)dp[i]=-1;
    cout<<topdown(n,dp)<<endl;
    cout<<bottomup(n)<<endl;
    cout<<fibo(n)<<endl;
    return 0;
}