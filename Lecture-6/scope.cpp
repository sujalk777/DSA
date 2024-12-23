#include<iostream>
using namespace std;
int a=-69;
int main(){
    cout<<a<<endl;
    int a=100;
    int b=200;
    if (b>0){
        a=69;
        int x =20;
        cout<<a<<endl;
        cout<<"Global a:"<<::a<<endl;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    

    return 0;
}
