#include <iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    for(;n>0;n/=10){
        d=n%10;
        cout<<d;

    }
    cout<<endl;
    return 0;
}