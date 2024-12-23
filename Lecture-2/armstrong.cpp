#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int
int main(){
    ll n,sum=0;
    cin>>n;
    ll n_copy=n;
    ll digit=0;
    while(n!=0){
        digit++;
        n/=10;
    }
    n=n_copy;
    while(n!=0){
        ll ld=n%10;
        sum=sum+pow(ld,digit);
        n/=10;
    }
    if(sum==n_copy){
        cout<<"It is a armstrong number";
    }
    else{
        cout<<"nhi hai bhai kyu timewaste??";
    }



    

    
    return 0;
}
