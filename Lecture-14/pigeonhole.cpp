#include<iostream>
using namespace std;
int main(){
    int a[]={1,0,2,4,3};
    int n=sizeof(a)/sizeof (int);
    int prefixsum[100];
    prefixsum[0]=a[0];
    for(int i=0;i<n;i++){
        prefixsum[i]=prefixsum[i-1]+a[i];
        prefixsum[i]%=n;
    }
    int cnt[10000]={0};
    
    return 0;
}