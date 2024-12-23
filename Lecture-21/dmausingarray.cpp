#include<iostream>
using namespace std;
int*createarray(int n){
    int*x=new int[n];
    for(int i=0;i<n;i++){
        x[i]=i+1;
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    int*a=createarray(n);
    for(int i=0;i<n;i++){
        cout<<a[i]<< endl;

    }
    return 0;


}


