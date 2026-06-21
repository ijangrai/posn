#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int min = 481;
	int max = -1;
	
	while(t--) {
		int s, e;
		cin >> s >> e;
		if (s <= min) min = s;
		if (e >= max) max = e;
	}
	
	cout << 479-(max-min);
}
