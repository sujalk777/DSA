#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof (a)/sizeof (int);
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=0;k<=j;k++){
                sum+=a[k];
            }
            if(sum%n==0){
                ans++;
            }

        }
    }
    cout<<ans<<endl;
    return 0;

}
