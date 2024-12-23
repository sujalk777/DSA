#include<iostream>
using namespace std;
int nstair(int n){
    //base case 
    if(n==0){
        return 1;

    }
    if(n<0){
        return 0;
    }

    //recursive case
    return nstair(n-1)+nstair(n-2)+nstair(n-3);
}
int main(){
    cout<<"n5 :"<<nstair(5)<<endl;
    return 0;
}