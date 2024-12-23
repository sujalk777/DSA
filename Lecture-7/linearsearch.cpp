#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int key=2,i;
    for(i=0;a[i]!=key;++i){
        cout<<"key found at :"<<i+1<<endl;
    }
    if (i==5){
        cout<<"key not found! ";
    }
    return 0;    

    

}
