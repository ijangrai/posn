#include<bits/stdc++.h>
using namespace std;

int main() {
	string txt;
	cin>> txt;
	char c;
	cin>>c;
	
	for(int i = 0; i < txt.length(); i++) {
		if(txt[i] == c) {
			cout << '#';
		}
		else {
			cout << txt[i];
		}
	}
	
	
	
	return 0;
}
