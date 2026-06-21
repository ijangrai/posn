#include<bits/stdc++.h>
using namespace std;

int main() {
	string txt;
	int c = 0;
	
	getline(cin, txt);
	
	for(int i = 0; i < txt.length(); i++) {
		if ((txt[i] >= 'A' && txt[i] <= 'Z') || (txt[i] >= 'a' && txt[i] <= 'z')) {
//			cout << (int)txt[i] << endl;
			c += (int)txt[i];
		}
	}
	
	cout << c;
	
	return 0;
}
