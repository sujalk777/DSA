#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
int main(){
    cout<<power(4,3)<<endl;
    return 0;
}
