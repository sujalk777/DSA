#include<iostream>
#include<map>//ordered_map: works in 0(logn) time:uses red black tree inside
#include<unordered_map>//works in o(1) average time
//we are going to get the data sorted according to key

using namespace std;
int main(){
    //unordered_map<key,value>h;
    //unordered_map<string,int>h;
    map<string,int >h;
    //in hashmap we can insert a pair into it 
    pair<string,int>p={"Pineapple ",50};
    h.insert(p);
    h.insert({"guava",150});
    h.insert(make_pair ("orange",150));
    h.insert(make_pair("dragon fruit",150));
    h.insert(make_pair("aam",150));
    
    h["Mango"]=100;
    //unordered_map<string,int>::iterator x;
    //to print tthe unoredered string bucket by bucket 
    //for(int i=0;i<h.bucket.count();i++)
    //inorder to just see all the key and value pair inside the 
    //unordred _map h: foreach loop
    //for(pair;h<string,int>p:h)
    for(auto p : h){
        cout<<p.first <<" ,"<<p.second<<endl;
    }
    return 0;
}