#include<iostream>
using namespace std;
int factorial(int n){
   int ans=1 ;
   for(int i=1;i<=n;i++){
    ans*=i;
   } 
   return ans;
}
int ncr(int n, int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nr=factorial(n-r);
    int ans=fact_n/(fact_r*fact_nr);
    return ans;
}
int main(){
    cout<<ncr(4,2);
    
    return 0;
}
