#include<iostream>
using namespace std;
int multiply(int a,int b){
    //base case
    if(b==0){
        return 0;
    }

    //recursive case 
    return a+multiply(a,b-1);

}
int main(){
    cout<<multiply(15,15)<<endl;
    return 0;
}