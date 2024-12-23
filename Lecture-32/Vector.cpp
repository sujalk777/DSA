#include<iostream>
#include<vector>
using namespace std;
class vect {
    void doublecap(){
        int *oldarr=arr;
        int oldcap=cap;
        cap=cap*2;
        arr=new int[cap];
        for(int i=0;i<oldcap;i++){
            arr[i]=oldarr[i];
        }
        delete oldarr;
    }
public:
    int totalsize,cap;
    int*arr;
    vect(int vcap=1){
        cap=vcap;
        arr=new int[cap];
    }
    void push_back(int data){
        if(totalsize==cap){
            doublecap();
        }
        arr[totalsize]=data;
        totalsize++;
    }
    void pop(){
        if(totalsize>0){
            totalsize--;
        }
    }
    int&operator[](int index){
        return arr[index];
    }
    // bool isempty(){
    //     return totalsize=0;
    // }
};
int main(){
    vect v;
    v.push_back(100);
    cout<<v.totalsize<< " "<<v.cap<<endl;
    v.push_back(3);
    cout<<v.totalsize<< " "<<v.cap<<endl;
    v.push_back(34);
    cout<<v.totalsize<< " "<<v.cap<<endl;
    return 0;
}