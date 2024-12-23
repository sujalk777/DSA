#include<iostream>
using namespace std;
bool check7(int*a,int n,int i){
    if(i==n){
        return false;
    }
    if(a[i]==7){
        return true;
    }
    return check7(a,n,i+1);
}
int first7(int*a,int n,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==7){
        return i;
    }
    return first7(a,n,i+1);
    //return index of 7
}
int last7(int*a,int n){
    //base case
    if(n==0){
        return -1;
    }
    if(a[n-1]==7){
        return n-1;
    }
    return last7(a,n-1);
}
void printall7(int*a,int n,int i){
    //base case
    if(i==n){
        return;
    }
    if(a[i]==7){
        cout<<i<<" ";
    }
    printall7(a,n,i+1);
}
int main(){
    int a[]={1, 7, 2, 17,7 ,4, 5};
    int n=sizeof (a)/sizeof (int);
    cout<<check7(a,n,0)<<endl;
    cout << first7(a, n, 0) << endl;
	cout << last7(a, n) << endl;
	printall7(a, n, 0);
	cout << endl;
    return 0;
}

