#include<bits/stdc++.h>
using namespace std;

int octa(int n) {
	if(n==0) return 0;
	
	octa(n/8);
	cout << n%8;
	
	return 0;
}

int main() {
	
	int n;
	cin>>n;
	
	octa(n);
	
	
	
}
