#include<iostream>
using namespace std;
void printarray(int a[5],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void bubblesort(int a[5],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }

        }
    }

}
int main(){
    int a[]={-3,4,-2,-15,5,7,45};
    int n=sizeof(a)/sizeof(int);

    int b[]={-17,-12,31,-41,76};
    int m=sizeof(b)/sizeof(int);

    printarray(a,n);
    bubblesort(a,n);
    printarray(a,n);

    printarray(b,m);
    bubblesort(b,m);
    printarray(b,m);

    return 0;



    
}