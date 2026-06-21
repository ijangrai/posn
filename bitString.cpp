#include<bits/stdc++.h>
using namespace std;

char str[25], sub[25];
int n, c = 0;

int cal(int all) {
	if (all == n) {
		if(strstr(str, sub) != NULL) {
//			cout << str << endl;
			c++;
		}
	}
	else {
		str[all] = '0';
		cal(all+1);
		str[all] = '1';
		cal(all+1);
	}
	return 0;
}


int main() {
	cin >>n;
	cin>>sub;
	str[n] = 0;
	cal(0);
	cout << c;
	
	
	
	return 0;
}
