#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	for(int i = 0; i < m; i++) {
		int q;
		cin>>q;
		int ch = false;
		
		int l = 0;
		int r = v.size()-1;
		
		while(l<r) {
			if (v[l] + v[r] == q) {
				cout << "YES" << "\n";
				ch = true;
				break;
			}
			else if(v[l] + v[r] > q) r--;
			else l++;
		}
		if(!ch) cout << "NO" << "\n";
		
	}
	
	
	
		
	
	return 0;
}
