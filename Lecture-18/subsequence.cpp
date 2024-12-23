#include<iostream>
using namespace std;
void subsequece (char*in,int i, int j,char*out){
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    } 

    //recursive case
    //1.ith character ko ignore kardo and recursion karega choti problem solve bhenchod
    subsequece(in,i+1,j,out);
    //2.ith character ko lelo and choti problem pelo bro
    out[j]=in[i];
    subsequece(in,i+1,j+1,out);
}
int main(){
    char a[]="goku";
    char out[100];
    subsequece(a,0,0,out);
    return 0;

}