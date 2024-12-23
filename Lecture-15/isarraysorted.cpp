#include<iostream>
using namespace std;
bool issorted(int*a,int n){
    if(n==0 || n==1){
        return true;
    } 
    bool kyachotasortedhai=issorted(a+1,n-1);
    if(a[0]<=a[1] and kyachotasortedhai==true){
        return true;
    }
    else{
        return false;
    }
}
bool issorted2(int*a,int n){
    if(n<=1){
        return n;
    }
    bool kyachotasortedhai=issorted2(a,n-1);
    if(a[n-1]>=a[n-2] and kyachotasortedhai==true){
        return true;
    }
    else{
        return false;
    }

}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    issorted2(a,n);
    return 0;
}