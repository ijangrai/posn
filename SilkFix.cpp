#include<bits/stdc++.h>
using namespace std;

int main() {
	char c;
	int w;
	int p;
	
	cin >> c >> w >> p;
	
	for(int i = 0; i < w; i++) {
		for(int j = 0; j < w; j++) {
			if (((p-j)-i)%p == 0) {
				cout << c;
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}
	
	
	
	return 0;
}
