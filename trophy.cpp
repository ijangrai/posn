#include<bits/stdc++.h>
using namespace std;

int main() {
	
	
	string str;
	cin >> str;
	int n = str.length();
	int h  = 0;
	cin >> h;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < h; j++) {
			for(int k = 0; k < h*i; k++) cout << ".";
			
			for(int k = 0; k < n-i; k++) {
				
				for(int l = 0; l <2*h; l++) {
					if (l>=j && l<2*h-j-1) cout << str[i];
					
					else cout << ".";
				}
				
				
			
			}
			for(int k = 0; k < h*i; k++) {
					cout << ".";
				}	
			
				cout << endl;
		}
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
