#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m; 
	
	cin >> n >> m;
	
	vector<queue<int>> v(2 * n);
	
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int t; 
			
			cin >> t;
			
			v[j + i].push(t);
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < 2 * n; j++) {
			int temp = v[j].front();
			v[j].pop();
			v[j].push(temp);
		}
	}
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << v[i + j].front() << ' ';
			v[i + j].pop();
		}
		
		cout<<'\n';
	}
	
	
	return 0;
}
