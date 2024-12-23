#include<iostream>
#include<cmath>
using namespace std;
bool safehai(int a[][9],int i,int j,int no,int n){
    ///1.no row ya col main nhi hona chahiye
    for(int k=0;k<n;++k){
        if(a[i][k]==no || a[k][j]==no){
            return false;
        }
    }
    //2. no current wale 3x3 wale matrix main bhi nhi chahiye 
    n=sqrt(n);
    int si=(i/n)*n;
    int sj=(j/n)*n;
    for(int r=si;r<si+n;++r){
        for(int c=sj;c<sj+n;++c){
            if(a[r][c]==no){
                return false;
            }
        }
    }
    return true;
}
bool sudokusolver(int a[][9],int i,int j,int n){
    //base case 
    if(i==n){
        //print the sudoku
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                cout<<a[r][c]<<" ";
            }
            cout<<endl;
        }
        //sudoku solve ho gai,jai shree bolo jor se 
        return true;
    }
    //recursive case se pehle do cheeze check karna zaruri hai
    //1.agar j==n hi gya toh agle column par le jaane
    //tumahra baap toh aayega nhi 
    if(j==n){
        bool solvehuabaaki=sudokusolver(a,i+1,0,n);
        return solvehuabaaki;  
    }
    //2.cell agar empty nahi hai toh agey baad choti prbolem tod doa aur 
    if(a[i][j]!=0){
        bool solvehuabaaki=sudokusolver(a,i,j+1,n);
        return solvehuabaaki;
    }
    //agar upar ki dono cheeze theek hai toh maamla garam hai ab bhar do cell ko 
    //recursive case
    //saare empty cell fill karne number 1-n tak 
    //ek kam main kar deta hu baaki recurssion kar deag 

    for(int no=1;no<=n;++no){
        //pehle check karo ki safe hai ki nhi
        if(safehai(a,i,j,no,n)==true){
            a[i][j]=no;
        
            //ab baakki ka kaam recursion ko bolo na bro
            bool kyabaakisolvehua=sudokusolver(a,i,j+1,n);
            if(kyabaakisolvehua==true){
                return true;
            } 
            //if recursion nhi kar paaya to number return karna zarurri hai 
            a[i][j]=0;//backtracking
        }
    }
    //1-n sab daalkar dekh liya lekinn baat nhi baan rahi na bhai 
    return false;

}
int main(){
    int mat[9][9]={	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    sudokusolver(mat,0,0,9);
    return 0;
}