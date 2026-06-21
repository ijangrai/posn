#include<bits/stdc++.h>
using namespace std;

int main() {
	string txt;
	int start = 2;
	
	cin>> txt;
	
	for(int i = 0; i < txt.length(); i++) {
		cout << txt[start%txt.length()];
		start += 3;
	}
	
	
	
	
	
	
	return 0;
}
