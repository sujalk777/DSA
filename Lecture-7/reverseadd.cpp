#include<iostream>
using namespace std;
int main(){
    int n,sumrev,a,b,rem;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;

    }
    long long int reva=0,revb=0;
    for(;a>0;a/=10){
        rem=a%10;
        reva=reva*10+rem;


    }
    for(;b>0;b/=10){
        rem=b%10;
        revb=revb*10+rem;
    }
    sumrev=reva+revb;
    long long int rev=sumrev;
    int res=0;

    for(;rev>0;rev/=10){
        rem=rev%10;
        res=res*10+rem;

    }
    cout <<"sum of the rev : "<<res<<endl;
    
    return 0;
}