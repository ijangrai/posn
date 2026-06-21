#include<bits/stdc++.h>
using namespace std;

//

struct value {
	int val;
	int index;
	char c;	
};

char conv(int val) {
	if(val >= 80) return 'A';
	if(val >= 70) return 'B';
	if(val >= 60) return 'C';
	if(val >= 50) return 'D';
	return 'F';
}

bool compar(value a, value b) {
	return a.val < b.val;
}

int main() {
	int n;
	cin >> n;
	vector<value> v;
	
	for(int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		v.push_back({t, i, conv(t)});
	}
	sort(v.begin(), v.end(), compar);
	
	for(auto [value, index, grade] : v) cout << index << " ";
	cout << "\n";
	for(auto [value, index, grade] : v) cout << grade << " ";
	
	
	
	
	return 0;
}
