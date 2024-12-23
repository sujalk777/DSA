#include<iostream>
#include<climits>
using namespace std;
int mincoin(int amt,int deno[],int n,int *dp){//topdown
    //base case 
    if(amt==0) return dp[amt]=0;
    if(dp[amt]!=-1) return dp[amt];
    //recursive case
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(amt>=deno[i]){
            int chotiamt=amt-deno[i];
            int x=mincoin(chotiamt,deno,n,dp);
            //when chotiamt ka ans is not possible
            //if(x!=int max)
            if (x!=INT_MAX) ans=min(ans,x+1);
        }
    }
    return dp[amt]=ans;
}
int bottomup(int amt,int *deno,int n){
    int dp[1000];
    for(int i=0;i<1000;i++){
        dp[i]=INT_MAX;

    }
    dp[0]=0;
    for(int rupay=1;rupay<=amt;rupay++){
        for(int i=0;i<n;i++){
            if(rupay>=deno[i]){
                int choterupay=rupay-deno[i];
                if(dp[choterupay]!=INT_MAX){
                    dp[rupay]=min(dp[rupay],dp[choterupay]+1);
                }
            }
        }
    }
    return dp[amt];
}
int main(){
    int deno[]={1,7,10};
    int n=sizeof(deno)/sizeof(int);
    int dp[1000];
    for(int i=0;i<1000;i++){
        dp[i]=-1;
    }
    cout<<mincoin(999,deno,n,dp)<<endl;
    cout<<bottomup(999,deno,n)<<endl;
    return 0;
}