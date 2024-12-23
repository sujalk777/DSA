#include<iostream>
#include<stack>
using namespace std;
int main(){
	int heights[]={7,2,3,4,1,6,5};
	int n=sizeof (heights)/sizeof (int);
	int ns[1000], ps[1000];
	stack<int>s;
	s.push(0);
	//finding the next smaller
	for(int i=1;i<n;i++){
		int ch=heights[i];
		while(!s.empty() and ch<heights[s.top()]){
			ns[s.top()]=i;
			s.pop();

		}
		s.push(i);
	}
	while(!s.empty()){
		ns[s.top()]=n;
		s.pop();
	}
	for(int i=0;i<n;i++){
		cout<<ns[i]<< " ";
	}
	cout<<endl;
	//finding previous smaller
	s.push(n-1);
	for(int i=n-2;i>=0;--i){
		int ch=heights[i];
		while(!s.empty() and ch<heights[s.top()]){
			ps[s.top()]=i;
			s.pop();
		}
		s.push(i);
	}
	return 0;
}