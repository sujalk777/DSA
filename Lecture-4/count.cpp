#include<iostream>
using namespace std;
int main(){
    int n,no,i=1;
    int ans=0;
    cin>>n;
    while(i<=n){
        cin>>no;
        ans=ans^no;
        i++;
       

    }
    cout<<ans<<endl;
    return 0;

}