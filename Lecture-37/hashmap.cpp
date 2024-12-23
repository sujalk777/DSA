#include<iostream>
using namespace std;
class node{
public:
    int data;
    string key ;
    node*next;
    node(string k,int d){
        key= k;
        data=d;
    }
};
class hashmap{
    int hashfunction(string s){
        int ans=0;int mul=1;
        for(int i=0;i<s.size();i++){
            ans+=((s[i]%ts)*(mul%ts))%ts;
            mul=((mul%ts)*(37%ts))%ts;
        }
        return ans%ts;
    }
    void rehashing(){
        //purane array ko data hai toh memory leak thodi karni karni hia 
        //store karna padega 
        node**olda=a;
        int oldts =ts;
        //new array bnanaha hai double size ka 
        ts=ts*2;
        a=new node*[ts];
        //cs ko zero karna padega,kynuki a[] mei kitne element hai yeh
        //denote karta hai 
        cs=0;
        for(int i=0;i<oldts;i++){
            node*head=olda[i];
            while(head!=NULL ){
                insert(head->key,head->data);
                head =head ->next;
            }
        }
    }
    public:
    int ts;
    int cs;
    node**a;
    hashmap(int t=7){
        a=new node*[t];
        ts=t;
        cs=0;
        for(int i=0;i<ts;i++){
            a[i]=NULL;//har bucket node* type ki 
            //usme null value bharna zaruri hai

        }
    }
    void insert(string key,int value){
        //1.key to integer mei convert karna padega
        int hashindex=hashfunction(key);
        //2.we need to store the key and value node and hashindex od an array[]
        node*n=new node(key,value);
        n->next=a[hashindex];
        a[hashindex]=n;
        cs++;
        float load_factor=cs/(ts*1.0);
        if(load_factor>0.5){
            rehashing();//agar table 50% se jyada full hia toh;
        }
    }    
    void print(){
        for(int i=0;i<ts;i++){
            cout<<i<<"-->";
            node*head=a[i];
            while(head!=NULL){
                cout<<"("<<head->key<<","<<head->data<<")";
                head=head->next;
            }
            cout<<endl;
        }
    }
    node*search(string key){
        int hashindex=hashfunction(key);
        node*head=a[hashindex];
        while(head!=NULL){
            if(head->key==key) return head;
            head =head->next;
        }
        return head;//or return null kyunki agar usme node present hoga 
    }
    int&operator[](string key){
        node*x=search(key);
        if(x==NULL){
            int g;
            insert(key,g);//g can be anything because yeh update
            //ho jaegi abhi jab hum buckket return krenge main ko 
            x=search(key);
            return x->data;
        }
        return x->data;
    }
};
int main(){
    hashmap h;
    h.insert("Mango",100);
    h.insert("Apple",100);
    h.insert("Mausmi",100);
    // h.insert("Guava",100);
    h.print();

    return 0;
}
