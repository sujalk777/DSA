#include<iostream>
#include<vector>
using namespace std;
int rainwater(vector<int> &v){
    int n=v.size();
    vector<int> leftmax(n),rightmax(n);
    leftmax[0] = 0 ;
    int leftkisabsebadibuilding;
    for(int i=0;i<n;i++){
        leftmax[i]=leftkisabsebadibuilding;
        leftkisabsebadibuilding=max(leftkisabsebadibuilding,v[i]);


    }
    rightmax[n-1]=0;
    int rightkisabsebadibuilding;
    for(int i=0;i<n;i++){
        rightmax[i]=rightkisabsebadibuilding;
        rightkisabsebadibuilding=max(rightkisabsebadibuilding,v[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int kitnapaaniruka=min(rightmax[i],leftmax[i]) - v[i];
        if(kitnapaaniruka>0){
            ans+=kitnapaaniruka;
        }

        
    }
    return ans;
}
