#include<iostream>
using namespace std;
void printarray(int a[5],int n ){
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";

    }
    cout<<endl;
    

}
void squarearray(int a[5],int n){
    for(int i=0;i<n;i++){
        a[i]*=a[i];
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof (a)/sizeof (int);
    printarray(a,n);
    squarearray(a,n);
    printarray(a,n);
    return 0;

}