#include<bits/stdc++.h>
using namespace std;

int main() {
	
	char realui[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '*', '0', '#'};
	char newui[12] = {};
	char c;
	string phonenum = "";
	int j = 0;
	
	for(int i = 0; i < 12; i++) {
		cin >> c;
		
		newui[i] = c;
	}
	
	cin >> phonenum;
	
	for(int i = 0; i< phonenum.length(); i++) {
		for(int j = 0; j < 12; j++) {
			if (phonenum[i] == newui[j]) {
				cout << realui[j];
				j = 12;
			}
		}
	}
	
	return 0;
}
