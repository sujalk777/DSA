#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int a[]={-1,-2,-3};
    int n=sizeof (a)/sizeof (int);
    int maxsum=INT_MIN;
    //tc=o(n^3)
    //n->10^4,TLE 
    //10^7->1sec 
    //10^12->10^5 sec
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int ans=0;
            for (int k=i;k<j;k++){
                //cout<<a[k];
                ans+=a[k];
            }
            maxsum=max(maxsum,ans);
        }
    }
    cout<<"max sum  :"<<maxsum<<endl;
    return  0;
    //is wale code ki time complexity bhut zyada kharab hai bhaiya
    
}