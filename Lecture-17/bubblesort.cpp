#include<iostream>
using namespace std;
void bubblesort(int*a,int n,int i){
    //patt se basecase banao
    if(i==n-1){//agar n-1 element apni sahi chale gaye to sara scene 
    //set ho gaya hai vro koi tension wali baat hee nhi hai
        return;
    } 
    //recursive case 
    //agar ek element ko sahi jagah par rakh diya 
    //to saara scene set ho na vroooooooooooooooooooooo 
    for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
    } 
    bubblesort(a,n,i+1); 
}
int main(){
    int a[]={4,3,6,66,1,54};
    int n=sizeof (a)/sizeof (int);
    bubblesort(a,n,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}