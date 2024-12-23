#include<iostream>
#include<unordered_map>//stl standard template library

using namespace std;
int main(){
    unordered_map<string,int>h;
    h.insert({"Mango",100});
    h.insert({"Apple",150});
    h.insert({"Banana",10});
    h.insert({"Kiwi",200});
    for(auto p : h){
        cout<<p.first<< " "<<p.second<<endl;
    }
    return 0;
}