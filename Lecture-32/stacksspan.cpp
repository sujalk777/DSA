#include<iostream>
#include <stack>
using namespace std;
class Pair {
public:
    int price;
    int span;    
};
class stockspan{
public:
    stack<Pair> s;//data member stack bana liya main ek
    stockspan(){

    }
    int next(int currentdayprice){
        int span=1;
        while(!s.empty() and s.top().price<=currentdayprice){
            span+=s.top().price;
            s.pop();
        }
        //Kyunki previous day tak ka mujhe answer required hoga
        //to calculate the answer for current day
        s.push({currentdayprice,span});//toh thats why currentday
        //ko stack mei store kr lia
        return span;
    }

};