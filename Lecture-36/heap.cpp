#include<iostream>
#include<vector>
using namespace std;
class minheap{
    public:
    vector<int>v;
    minheap(){
        v.push_back(-1);//0th index par kuch random value daal do 
        //taaki uspar data na jaaye koi bhi 
    }
    void push(int data){//insertion done
        v.push_back(data);
        int indx=v.size()-1;
        int p=indx/2;
        while(p>0 and v[p]>v[indx]){
            swap(v[p],v[indx]);
            indx=p;
            p/=2;
        }
    }
    int top(){
        return v[1];//search done
    }
    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        heapify(1);
    }
    bool empty(){
        return v.size()==1;
    }
    void heapify(int indx){

    }
};
int main(){
    return 0;
}