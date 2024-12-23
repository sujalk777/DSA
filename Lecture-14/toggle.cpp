#include<iostream>
#include<cstring>
using namespace std;
void toggle(char a[]){
    for(int i=0;a[i]!=0;i++){
        if(a[i]>='A' &&a[i]<='Z'){
            a[i]=a[i]-'A'+'a';
        }
        else if(a[i]>='a' &&a[i]<='z'){
            a[i]=a[i]+'A'-'a';
        }
    }
}
int main(){
    char a[]="PATTseheadshot";
    toggle(a);
    cout<<a<<endl;
    return 0;
}