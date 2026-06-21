#include<bits/stdc++.h>
using namespace std;



int main() {
	int t;
	set<char> sletter;
	
	
	cin >> t;
	
	while (t--) {
		char s;
		cin >> s;
		sletter.insert(s);
	}
	
	
	vector<char> letter(sletter.begin(), sletter.end());
	
	for (int i = 0; i < letter.size(); i++) {
		
		for (int j = 1; j < letter.size()-i; j++) {
			cout << " ";
		}
		
		for(int j = 0; j <= i; j++) {
			cout << letter[j];
		}
		
		for(int j = i-1; j >= 0; j--) {
			cout << letter[j];
		}
		
		cout << endl;
	}
	
	for (int i = letter.size()-2; i >= 0; i--) {
		
		for(int j = 1; j < letter.size()-i; j++) {
			cout << " ";
		}
		
		for(int j = 0; j < i; j++) {
			cout << letter[j];
		}
		
		for (int j = i; j >= 0; j--) {
			cout << letter[j];
		}
		cout << endl;
	}
	
	
	
	
	
	
	return 0;
}
