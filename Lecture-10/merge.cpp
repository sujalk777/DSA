#include <iostream>
using namespace std;
void mergesorted(int a[],int m,int n,int b[]){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 and j>=0){
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
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }

}
void printarray(int a[],int n ){
    for(int i=0;i<n;i++){
        cout <<a[i]<<" ";
    }
    cout<<endl;
}    
int main(){
    int a[7]={3,4,6};
    int m=3;
    int b[4]={-1,1,6,67};
    int n=4;
    mergesorted(a,m,n,b);
    printarray(a,m+n);
    return 0;
}