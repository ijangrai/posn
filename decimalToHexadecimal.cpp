#include<bits/stdc++.h>
using namespace std;

char c[16] = {'0', '1','2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int hexad(int n) {
	if(n==0) return 0;
	
	hexad(n/16);
	cout << c[n%16];
	
	return 0; 
}


int main() {
	int num;
	cin>>num;
	
	hexad(num);
	
	
	return 0;
}
