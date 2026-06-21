#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	vector<int> num;
	int max= -9999999;
	
	for(int i = 0; i < n; i++) {
		int k;
		cin >> k;
		num.push_back(k);
	}
	
	for(int i = 0; i < num.size()-3; i++) {
		if (num[i]+num[i+1]+num[i+2]+num[i+3] > max) max = num[i]+num[i+1]+num[i+2]+num[i+3];
		

	}
	cout << max;
	
	
	return 0;
}
