#include<iostream>
#include<vector>
using namespace std;
int rainwater(vector<int>&v){
    int n=v.size();
    int leftmax=0;
    int rightmax=0;
    int l=0,r=n-1;
    int ans=0;
    while(l<r){
        if(v[l]<v[r]){
            if(leftmax>v[l]){
                ans+=leftmax-v[l];
            }
            leftmax=max(leftmax,v[l]);
            l++;
        }
        else{
            if(rightmax>v[r]){
                ans+=rightmax-v[r];
            }
            rightmax=max(rightmax,v[r]);
            r--;
        }
    }
    return ans;

}
int main(){
    return 0;

}