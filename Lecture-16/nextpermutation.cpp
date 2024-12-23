#include<iostream>
#include<algorithm>
using namespace std;
void nextpermutation(char*a,int n){
    int i=n-2;
    while(a[i]>=a[i+1]){
        i--;
    }
    if(i==-1){
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }cout<<endl;
    }
    else{
        int indx=-1;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i] and indx==-1){
                indx=j;
            }
            else if(a[j]>a[i] and a[j]<a[indx]){
                indx=j;
            }
        }
        swap(a[i],a[indx]);
        sort(a+i+1,a+n);
    }  
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    } 
}
int main(){

    
    return 0;
}
