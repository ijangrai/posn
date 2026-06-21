#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int l;
	char c;
	
	cin >> l >> c;
	
	if (l%2 == 0) {
		for(int i = 0; i < l/2; i++) {
			for(int j = 0; j < i+1; j++) {
				cout << c;
			}
			
			//spacing
			for(int j = 0; j < l-((i+1)*2); j++) {
				cout << " ";
			}
			
			
			for(int j = 0; j < i+1; j++) {
				cout << c;
			}
			
			
			
			
			cout << endl;
		}
		
		for(int i = l/2; i > 0; i--) {
			for(int j = 0; j < i; j++) {
				cout << c;
			}
			
			//spacing
			for(int j = 0; j < l-(i*2); j++) {
				cout << " ";
			}
			
			for(int j = 0; j < i; j++) {
				cout << c;
			}
			
			
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < (l-1)/2; i++) {
			for(int j = 0; j < i+1; j++) {
				cout << c;
			}
			
			//spacing
			for(int j = 0; j < l-(2*(i+1)); j++) {
				cout << " ";
			}
			
			for(int j = 0; j < i+1; j++) {
				cout << c;
			}
			
			
			cout << endl;
		}
		
		for(int i = 0; i < l; i++) {
			cout << c;
		}
		cout << endl;
		
		for(int i = 0; i < (l-1)/2; i++) {
			for(int j = 0; j < (l/2)-i; j++) {
				cout << c;
			}
			
			//spacing
			for (int j = 0; j < l - ((l/2)-i)*2; j++) {
				cout << " ";
			}
			
			
			
			for(int j = 0; j < (l/2)-i; j++) {
				cout << c;
			}
			
			
			
			cout << endl;
		}
	}
	
	
	
	
	
	
	
	return 0;
}
