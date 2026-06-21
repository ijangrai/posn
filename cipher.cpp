#include<bits/stdc++.h>
using namespace std;

int main() {
	char c;
	string code;
	string txt;
	int curindex1 = 0;
	int change1 = 0;
	
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	cin >> c >> code >> txt;
	
	int codelength = code.length();
	
	if (c == 'e') {
	for(int i = 0; i < txt.length(); i++) {
//		cout << txt[i] << " ";

		for(int curindex = 0; curindex < 26; curindex++) {
			if(txt[i] == alphabet[curindex]) {
				curindex1 += curindex;
			}
		}
		
		for(int change = 0; change < 26; change++) {
			if(code[i%code.length()] == alphabet[change]) {
				change1 += change;
			}
		}
		
		cout << alphabet[(curindex1+change1)%26];
		
		curindex1 = 0;
		change1 = 0;
	}
		
	}
	else if(c == 'd') {
			for(int i = 0; i < txt.length(); i++) {
//		cout << txt[i] << " ";

		for(int curindex = 0; curindex < 26; curindex++) {
			if(txt[i] == alphabet[curindex]) {
				curindex1 += curindex;
			}
		}
		
		for(int change = 0; change < 26; change++) {
			if(code[i%code.length()] == alphabet[change]) {
				change1 += change;
			}
		}
		
		cout << alphabet[abs(curindex1-change1)];
		
		curindex1 = 0;
		change1 = 0;
	}
	}
	
	
	
	
	
	return 0;
}
