#include<bits/stdc++.h>
using namespace std;

void diamond(int w, char c, int h) {
	int dot = (w-1)/2;
	int size = w;
	int change = 0;
	
	
	for(int i = 0; i < w; i++) {
		
		for (int k = 0; k <h; k++) {
			for (int j = 0; j < abs((dot)-change); j++) {
				cout << ".";
			}
			for(int j = 0; j < abs(size-abs(dot-change)*2); j++) {
				cout << c;
			}
	
			for (int j = 0; j < abs((dot)-change); j++) {
				cout << ".";
			}
		}
		
		cout << endl;
		change++;
	}
	
}

int main() {
	char c;
	int w;
	int h;
	
	cin >> c >> w >> h;
	
	for(int j = 0; j < h; j++) {
		diamond(w, c, h);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
