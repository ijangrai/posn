#include<bits/stdc++.h>
using namespace std;

int main() {
	char c;
	int n, w, l;
	cin >> c>> n>>w>>l;
	char a[2*n+1][2*n+1];
	for(int i = 0; i < 2*n+1; i++) {
		for(int j = 0; j< 2*n+1; j++) {
			if (abs(i-n) + abs(j-n) <= n) {
				a[i][j] = c;
			}
			else {
				a[i][j] = '.';
			}
		}
		
	}
	for(int r=0; r<=l;r++) {
		for(int i=0; i< 2*n+1; i++) {
				int y;
		if(r==0) {
			y = 0;
		}
		else {
			y=2*n+1-r;
		}
		for(int j=0; j < w; j++) {
			cout << a[i][y];
			y++;
			if (y==2*n+1) {
				y = 0;
			}
		}
			cout << "\n";
		}
	}
	
	
	
	return 0;
}
