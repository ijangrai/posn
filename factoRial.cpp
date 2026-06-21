#include<bits/stdc++.h>
using namespace std;

int factorial (int n) {
	
	int result =1;
	
	for(int i  = n; i > 1; i--) {
		result*=i;
	}
	
	return result;
}

int main() {
	int n;
	
	cin >> n;
	
	cout << factorial(n);
	
	
	return 0;
}
