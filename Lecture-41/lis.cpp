#include<iostream>
#include<vector>
#include<cstring>
int lis_len=0;
vector<int>ans;
using namespace std;
void LIS(int*a,int n,vector<int>&v,int lv=INT_MAX){
    //base case 
    if(n==0){
        if(v.size()>lis_len){
            lis_len=v.size();
            ans=v;
        }
        return;
    }
    //recursive case 
    //1.include
    if(lv>a[n-1]){
        v.push_back(a[n-1]);
        LIS(a,n-1,v,a[n-1]);
        v.pop_back();//backtracking
    }
    //2.exclude
    LIS(a,n-1,v,lv);
}
void lis2(int*a,int n){
    int dp[10000];
    for(int i=0;i<10000;i++){
        dp[i]=1;
    }
    for(int j=1;j<n;j++){
        for(int k=j-1;k>=0;--k){
            if(a[j]>a[k]){
                dp[j]=max(dp[j],dp[k]+1);
            }
        }
    }

}
void printlis(int *a,int n,vector<int>&x,int len,int*dp,int lv=INT_MAX){
    //base case 
    if(n==0 and len==0){
        for(int i=x.size()-1;i>=0;--i){
            cout<<x[i]<<" ";
        }
        cout<<endl;

    }
    //recursive case 
    if(dp[n-1]==len and a[n-1 ]<lv){
        x.push_back(a[n-1]);
        printlis(a,n-1,x,len-1,dp,a[n-1]);
        x.pop_back();
    }
    printlis(a,n-1,x,len,dp,lv);
}
int main(){
    int a[]={10,9,3,5,4,11,7,8};
    int n=sizeof(a)/sizeof (int);
    vector<int>v;
    LIS(a,n,v);
    cout<<"LIS :"<<lis_len<<endl;
    for(int i=ans.size()-1;i>=0;--i){
        cout<<ans[i]<<"  ";
    }
    cout<<endl;
    return 0;
}