#include <iostream>
using namespace std;

int main() {
    int i,j;
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);

    for(i=0;i<n;++i){
        cout <<a[i]<<" ";
    }    
        cout<<endl;
        for(i=0;i<n-1;++i){
            for(j=0;j<=n-2;++j){
                if(a[j]>a[j+1]){
                    a[j]=a[j]+a[j+1];
                    a[j+1]=a[j]-a[j+1];
                    a[j]=a[j]-a[j+1];
                }    
            } 
        }       
            for(i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            
        
    cout<<endl;

    return 0;


}