#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    int mul =1;
    int pos=1;
    while(n>0){
        int rd=n%10;
        for(int i=1;i<n;i++){
            mul*=10;
        }
        rev+=pos*mul;
        pos++;
        n/=10;
    }
    cout<<rev<<endl;
    return 0;
}
