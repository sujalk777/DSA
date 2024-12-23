#include<iostream>
#include<vector>
using namespace std;
int trapwater(vector<int>&v){
    int n=v.size();
    int l=0,r=n-1;
    int leftmax=0,rightmax=0;
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
    vector<int>v={4,2,0,3,2,5};
    cout<<trapwater<<endl;
    return 0;
}