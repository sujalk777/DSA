#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    char ch;
    cin>>n;
    
    
    for(row=1;row<=n;row++){
        ch='A';
        for(col=1;col<=n-row+1;col++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(col=1;col<=n-row+1;col++){
            cout<<ch;
            ch--;
        }
        cout<<endl;  


        
    }
       

    
    
    
    
    
    return 0;
}
