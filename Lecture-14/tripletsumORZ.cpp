#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	int target;
	cin>>target;

	for (int i = 0; i < n - 2; ++i)
	{

		if (i > 0 and a[i] == a[i - 1]) {
			continue;
		}

		int j = i + 1;
		int k = n - 1;
		while (j < k) {
			if (a[i] + a[j] + a[k] < target) {
				j++;
			}
			else if (a[i] + a[j] + a[k] > target) {
				k--;
			}
			else {
				cout << a[i] << ", " << a[j] << " and " << a[k]  << endl;
				j++;
				k--;
				while (j < k and a[j] == a[j - 1]) {
					j++;
				}

				while (k > j and a[k] == a[k + 1]) {
					k--;
				}

			}
		}
	}


	return 0;
}