#include <iostream>
using namespace std;


int main() {
	char ch;
	int digits = 0, alpha = 0, white = 0, special = 0;
	for (ch = cin.get(); ch != '$' ; ch = cin.get())
	{
		if ((ch >= 'a' and ch <= 'z') || (ch >= 'A' and ch <= 'Z')) {
			alpha ++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			white++;
		}
		else {
			special++;
		}
	}

	cout << "Digits   :" << digits << endl;
	cout << "White    :" << white << endl;
	cout << "Alpha    :" << alpha << endl;
	cout << "Special  :" << special << endl;



	return 0;
}