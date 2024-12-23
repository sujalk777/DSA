#include<iostream>
using namespace std;
//it is a searching algorithm 
int binarysearch(int n,int a[],int key){
    int s=0,e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(a[m]==key){
            return m;

        }
        else if(a[m]<key){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;

}
int main(){
    int a[]={1,2,4,6,7,9};
    int n=sizeof (a)/sizeof (int);
    int key;
    cin>>key;
    cout<<binarysearch(n,a,key)<<endl;

    
    return 0;
}
