#include<iostream>
using namespace std;
string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void isstring(int n){
//base case
    if(n==0){
        return; 
    }
    //recurssive case
    int ld=n%10;
    isstring(n/10);
    cout<<a[ld]<<" ";
}
int main(){
    isstring(2048);
    cout<<endl;
    return 0;
}



