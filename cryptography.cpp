#include<bits/stdc++.h>
using namespace std;

int main() {
	char c = '0';
	string txt;
	int n;
	
	cin>>txt>>n;
	int k = 1;
	while((n*k)%43!=1) {
		k++;
	}
	
	for(int i = 0; i < txt.length(); i++) {
		int c;
		c = (int)txt[i]-48;
		c*=k;
		c%=43;
		c+=48;
		char l = c;
		
		cout << l;
//		cout << (int)txt[i]-48 << " ";
	}
	
	
	
	return 0;
}
