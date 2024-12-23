#include<iostream>
using namespace std;
int main(){
    char a[1000];
    //cin.get():character ko add karta hai
    //bhai character ko read karne liye imp hota hai
    //cin.getline(array name;number of character to input;delimiter);
    // whitespace ke sath string ko bho read karta hai 
    //by default delimter '\n'
    //mauj lo roz lo nahi khoj lo
    cin.getline(a,1000,'@');
    //arrey ab ayega na maza mere viiirooooooo
    cout<<a<<endl;
    return 0;
}