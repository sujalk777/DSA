#include<iostream>
using namespace std;
///////blueprint/////
class car{
private:
    int price;    
public:
//static data member:they belong to a class not to an object 
    static int count;
    //data member
    char*name;
    int model,seats;
    //constant data member->we can only initialize constant int buckets 
    //assign nahi kar sakte values ko 
    const int tyres;
    car():tyres(4){
        name =NULL;
        count++;
    } 
    car(char *n,int p,int s,int m):tyres(4),model(m),price(p),seats(s){
        name=new char(strlen(n)+1);
        strcpy(name,n);
        count++;
    }
};