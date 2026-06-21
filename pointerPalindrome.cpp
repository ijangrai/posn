#include<bits/stdc++.h>
using namespace std;

int main() {
	string txt;
	int c = 0;
	bool found = false;
	
	cin >> txt;
	
//	txt = "ABCDCBA";
	
	int txtlength = txt.length();
	
	char *ptfoward = &txt[0];
	char *ptbackward = &txt[txt.length()-1];
	
	while(*ptfoward) {
//		cout << *ptfoward << *ptbackward << endl;
 		if (*ptfoward != *ptbackward) {
 			cout << "no";
 			break;
		}
		
		c++;
		*ptfoward++;
		*ptbackward--;
	}	
	
	if (c == txtlength) found = true;
	
	if (found) cout << "yes";
	
	
	return 0;
}
