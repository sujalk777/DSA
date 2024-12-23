#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
char temp[1000];
vector<string>v;
void permutation(char*a,int i){
    //base case 
    if(a[i]=='\0'){
        if(strcmp(a,temp)>0){
            //array ko string main convert kro taaki vector
            //mei daal skey hum 
            string x(a);
            v.push_back(x);
        }
        return ;
    }
    //recursive case
    for(int j=i;a[j]!='\0';j++){
        swap(a[j],a[i]);//recursion ki call se pehle swap
        permutation(a,i+1);
        swap(a[j],a[i]);//backtracking
    }
}
int main(){
    char in[1000];
	cin >> in;

	strcpy(temp, in);

	permutation(in, 0);

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
	cout << endl;


    return 0;
    
}
