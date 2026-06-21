#include<bits/stdc++.h>
using namespace std;

int main() {
	string caesar = "";
	int index = 0;
	char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; // 26
	int c = 0;
	
	cin >> caesar;
	
	char cur = caesar[0];
	
	for(int i = 0; i < caesar.length(); i++) {
		for(int j = 0; j < 26; j++) {
			if (cur == letter[j]) {
				index = j;
				j = 26;
			}
		}
		
		
		if (caesar[i] != ':' && i != caesar.length()-1) {
			c++;
		}
		else {
			
			if (i == caesar.length()-1) {
//				cout << c+1;
				c++;
			}
		
			
			
//			cout << c; // changer
//			cout << index;	//current char index
//			cout << index-c;
			
			if (c % 2 == 0) {
//				cout << index+c;
				for(int k = 0; k < c; k++) {
					cout << letter[(index+c)%26];
				}
				
			}
			else {
//				cout << 26 -index-c;
				for(int k = 0; k < c; k++) {
					cout << letter[27 -index-c];
				}
				
			}
			
			if (i != caesar.length()-1) {
				cout << ":";
				cur = caesar[i+1];
			}
			else break;
			
			
			c = 0;
			
			
		}
		
//		cout << caesar[i];
		
	}
	
	
	
	return 0;
}
