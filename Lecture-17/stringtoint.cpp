#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int solve(char*a,int n){
    //base case 
    if(n==0){
        return 0;
    }

    //recursive case
    int ld=a[n-1]-'0';
    int chotans=solve(a,n-1);
    int badans=chotans*10+ld;
    return badans;
}
int main(){
    char a[]="1234";
    cout<<solve(a,strlen(a))<<endl;
    int x=(solve(a,strlen(a)))*10+5;
    cout<<x<<endl;
    return 0;
}