#include<iostream>
using namespace std;
//////////////////BLUE-PRINT ////////////////
class car{
private:
    int price;
public:
    //data members
    char*name;
    int model,seats;
    car(){
        cout<<"hello bro i am the default constructor\n";
        //yaha par name ko NULL krdo,kyunki name main garbage bhi ja sakta hai
        name=NULL;
    }
    car(char*n,int p,int s,int m){
        cout<<"hello bro i am the parameterized constructor\n";
        //kyunki name ek pointer hai,usse memory alloacate krni padegi
        //before we can copy n inside it
        //n'BMW'
        name=new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        seats=s;
        model=m;
    }
    car(car&y){
        cout<<"inside the copy constructor\n";
        name=new char[strlen(y.name+1)];
        strcpy(name,y.name);
        price=y.price;
        model=y.model;
        seats;y.seats;
    }
    void operator=(car y){
        cout<<"inside copy assignment\n";
        if(name!=NULL){
            delete []name;
        }
        name=new char[strlen(y.name)+1];
        seats=y.seats;
        model=y.model;
        price=y.price;
    }
    void setname(char*n){
        if(name!=NULL){
            delete []name;
        }
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    ~car(){
        cout<<"deleting"<<name<<endl;
    }
    void setprice(int p){
        if(p>100 and p<150){
            price =p;
        }
        else{
            price=120;
        }
    }
    int getprice(){
        return price;
    }
    void print(){
        cout<<"name :"<<name<<endl;
        cout<<"price :"<<price<<endl;
        cout<<"seats :"<<seats<<endl;
        cout<<"model :"<<model<<endl;
    }
};
/////////////////BLUE PRINT CAR//////////////////
int main(){
    car a;//gets created by default constructor 
    //strcpy(a.name,"bmw");
    a.setname("BMW");
    // a.name[0]='b';
    a.setprice(-1000);
    a.model=2020;
    a.seats=4;
    car b;///gets created by deafault constrructor
    //strcpy(b.name,"audi");
    b.setname("audi");
    //b.price=233;
    b.setprice(147);
    b.model=2022;
    b.seats=5;
    char x[]="lord alto";
    car c(x,50,4,2024);//gets created by parametrized constructor
    car d("lord nano",20,10,2020);
    car e=a;//copy constrcutor ko call karega
    //copy assignment operator function
    //agar ek bane huye object ko update karna hai doosre object 
    //then we use copy assignment operator(=)
    //b=a
    //this will call copy asssigment operator
    cout<<a.getprice()<<endl;
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
    return 0;

      

    

}