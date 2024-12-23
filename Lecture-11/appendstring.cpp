#include<iostream>
using namespace std;
void append(char*b,char*a){
    int i=0;
    int j=strlen(b);
    int len=strlen(a);
    while(i<=len){
        b[j]=a[i];
        i++;
        j++;
    }   
}
int main(){
    char a[100]="wahegurujikakhalsa",b[100]="wahegurujikifateh";
    //append mera baap to nahi karega na bruh
    append(a,b);
    cout<<a<<endl;
    return 0;   
}