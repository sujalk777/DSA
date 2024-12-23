#include<iostream>
using namespace std;
int main() {

	char ch = 'A';
	int value;

	while (ch <= 'Z') {
		value = ch;

		cout << ch << " " << value << endl;
		ch = ch + 1;
	}

	return 0;
}