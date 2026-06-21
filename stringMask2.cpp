#include<bits/stdc++.h>
using namespace std;

int main() {
	string txt;
	cin>>txt;
	char c;
	char to;
	cin >> c >> to;
	
	for(int i = 0; i < txt.length(); i++) {
		if(txt[i] == c) {
			txt[i] = to;
		}
		cout << txt[i];
	}	
	
	
	
	return 0;
}
