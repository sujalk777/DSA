#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
void solve(string in,string out,bool firstdigit=true){
    //base case 
    if(out.size()>in.size()){
        return ;
    }
    if(firstdigit==false){
        if(stoi(out)<=stoi(in)){
            cout<<out<<endl;
        }
    }
    //recursive case 
    int start=firstdigit?0:1;
    for(int i=0;i<=9;i++){
        char ch=i+'0';
        out.push_back(ch);
        solve(in,out,false);
        out.pop_back();//backtracking
    }

}
int main(){
    string in,out="";
    cin>>in;
    cout<<0<<endl;
    solve(in,out);
    return 0;
}