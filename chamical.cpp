#include<bits/stdc++.h>
using namespace std;

int halflife(int n, int yc) {
	if (yc <= 0) return n;
	yc--;
	return halflife(n/2, yc);
}

int main() {
	int n;
	int y;
	int yb;
	
	cin >> n >> y >> yb;
	
	int yc = yb/y;
	
	cout << halflife(n, yc);
	
	
	return 0;
}
