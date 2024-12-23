#include<iostream>
using namespace std;
int main(){
    int a[]={1,4,3,5,7};
    int n=sizeof (a)/sizeof (int);
    int*p;
    p=a;
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    return 0;
}