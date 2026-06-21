#include<bits/stdc++.h>
using namespace std;

bool isprime(int n) {
	if (n<=1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	
	for(int i = 3; i <= sqrt(n); i++) {
		if(n%i == 0) return false;
	}
	return true;
}

int main() {
	int n = 0;
	int result = 0;
	int l2r = 0;
	int r2l = 0;
	cin>>n;
	
	vector<vector<int>> m(n, vector<int>(n)) ;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) cin >> m[i][j];
	}
	
	for(int i = 0; i < n; i++) {

		if (isprime(m[i][i])) l2r += m[i][i];
	}
	
	for(int i = 0; i < n; i++) {

		if (isprime(m[i][n-i-1])) r2l += m[i][n-i-1];
	} 
	
	result = l2r+r2l;
	
	if(n%2!= 0) {
		if (isprime(m[n/2][n/2])) result -= m[n/2][n/2]; 
	}
	
	
	
	cout << result;
	
	
	return 0;
}
