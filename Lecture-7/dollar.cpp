#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int cnt;
    for(cnt=0;ch!='$';cnt++){
        cin>>ch;
    }
    cout<<cnt<<endl;
    return 0;
}
