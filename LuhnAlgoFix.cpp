#include<bits/stdc++.h>
using namespace std;

int main() {
	string credit;
	int sum = 0;
	int loop = 0;
	
	cin >> credit;
	
	if(credit.length() != 19) cout << "Incorrect";
	else {
		for(int i = 0; i < 19; i++) {
//			cout << credit[i] << endl;

	
			char c = credit[i];
			int n = c - '0';
			
			if (isdigit(c)) {
				if (loop%2 == 0) {
					if (n*2>=10) {
//						cout << (n*2)%10+1 << endl;
						sum += (n*2)%10+1;
					}
					else {
//						cout << n*2 << endl;
						sum += n*2;
					}
				}
				else {
//					cout << n << endl;
					sum += n;
				}
				
				loop++;
			}
			else continue;
		}
		
		if (sum%10!=0) cout << "Invalid";
		else {
//			cout << sum << endl;
			cout << "Valid" << endl;
			
			if (credit[0] == '2' || credit[0] == '5') cout << "Master Card";
			else if (credit[0] == '3') cout << "American Express";
			else if (credit[0] == '4') cout << "Visa";
			else if (credit[0] == '6') cout << "Discover";
		}
	}
	
	//cout << sum;
	
	
	
	
	return 0;
}
