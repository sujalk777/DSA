#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int > h;
    h.insert({"Mango",100});
    h.insert({"Apple",50});
    h.insert({"Kiwi",90});
    h.insert({"Banana",10});
    for(auto p : h){
        cout<<p.first<<", "<<p.second<<endl;

    }
    return 0;
}
