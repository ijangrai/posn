#include<bits/stdc++.h>
using namespace std;

int main() {
	int h;
	int m;
	int minc;
	
	cin >> h >> m >> minc;
	
	m += minc;
	h += m/60;
	m %= 60;
	h %= 24;
	
	
	string timeh = to_string(h);
	string minh = to_string(m);
	
	if (timeh.length() == 1) cout << "0";
	cout << h;
	cout << " ";
	if (minh.length() == 1) cout << "0";
	cout << m;
		
	
	
	
	
	return 0;
}
