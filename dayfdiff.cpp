#include<bits/stdc++.h>
using namespace std;

int main() {
	int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int d1, m1, d2, m2;
	cin >> d1 >> m1 >> d2 >> m2;
	int totald1 = d1, totald2 = d2;
	
	
	for(int i = 1; i < m1; i++) {
//		cout << day[i] << " ";
		totald1 += day[i];
	}
	for(int i = 1; i < m2; i++) {
		totald2 += day[i];
	}
	
	cout << totald2 - totald1 + 1;
	
	
	
	return 0;
}
