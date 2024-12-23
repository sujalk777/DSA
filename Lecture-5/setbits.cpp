#include<iostream>
using namespace std;
int main(){
    int n,rem,cnt=0;
    cin>>n;
    while(n>0){
        rem=n%2;
        cnt+=rem;
        n/=2;
        
    }
    cout<<"set bits "<<cnt<<endl;
    return 0;

}
