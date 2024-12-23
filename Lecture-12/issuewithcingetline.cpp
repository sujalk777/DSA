#include<iostream>
using namespace std;
int main(){
    char a[100];
    int n;
    cin>>n;
    //integer ke baad,aaj ke baad kabhi bhi 
    //string ko read kiya to usse ignore bhi to karna padega
    //read karlo,store mat karo ,bas mauj lo:)
    //ignore ho jaega apne aap hee
    cin.get();
    cin.getline(a,100);
    
    cout<<n<<endl;
    cout<<a<<endl;
    return 0;

}