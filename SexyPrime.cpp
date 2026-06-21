#include<bits/stdc++.h>
using namespace std;

int main() {
	int lb;
	int ub;
	
	int tw = 0;
	int cous = 0;
	int sexc = 0;
	
	cin >> lb >> ub;
	vector<bool> check(ub+7, true);
	
	check[0] = check[1] = false;
	
	for(int i =2;i*i<=ub+6; i++) {
		if (check[i]) {
			for(int j = i*i; j <=ub+6; j+=i) {
				check[j] = false;
			}
		}
	}
	for(int i = lb; i <= ub; i++) {
		if (check[i] == true) {
			if(check[i+2]==true || check[i-2] == true) tw++;
			if(check[i+4] == true || check[i-4] == true) cous++;
			if((check[i+6] == true || check[i-6] == true)) sexc++; 
		}
		
	}
	cout << tw << "\n" << cous << "\n" << sexc;
	
	return 0;
}
