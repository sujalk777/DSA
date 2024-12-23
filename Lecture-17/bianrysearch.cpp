#include<iostream>
using namespace std;
int binarysearch(int*a,int s,int e,int key){
    //base case 
    if(s>e){
        return -1;
    }

    //recursive case
    int m=(s+e)/2;
    if(a[m]==key){
        return m;
    }
    else if(a[m]>key){
        return binarysearch(a,s,m-1,key);
    }
    else{
        return binarysearch(a,m+1,e,key);
    }

}
int main(){

}