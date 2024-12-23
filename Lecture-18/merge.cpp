#include<iostream>
using namespace std;
void mergesorted(int a[],int m,int b[],int n){
    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while(i>=0 &&j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            i--;
            k--;
        }
        else{
            a[k]=b[j];
            k--;
            j--;
        }

    }
    while(i>=0){
        a[k]=a[i];
        i--;
        k--;
    }
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }


}
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={3,6,8,4};
    int m=sizeof (a)/sizeof (int);
    int b[]={5,7,9,3};
    int n=sizeof(b)/sizeof(int);
    mergesorted(a,m,b,n);
    printarray(a,m+n);
    return 0;
}