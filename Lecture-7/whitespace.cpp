#include<iostream>
using namespace std;
int main(){
    char ch;
    ch=cin.get();
    int cnt;
    for(cnt=1;ch!='$';cnt++){
        ch=cin.get();
    }
    cout<<"number of characters "<<cnt<<endl;
    
    return 0;
}
