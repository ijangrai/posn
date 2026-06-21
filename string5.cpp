#include<bits/stdc++.h>
using namespace std;

int main() {
	string txt;
	getline(cin, txt);
	char first;
	
	if(txt[0] >='a' && txt[0] <= 'z') {
		first = txt[0]-32;
		cout << first << '.';
	}
	else cout << txt[0] << ".";
	
	for(int i = 1; i < txt.length(); i++) {
		char c ;
		if(txt[i]==' ') {
			if(txt[i+1] >='a' && txt[i+1]<='z') {
				c = txt[i+1] - 32;
				cout << c << ".";
			}
			else {
				c = txt[i+1];
				cout << c << ".";
			}
		}
	}
	
	
	
	return 0;
}
