#include<bits/stdc++.h>
using namespace std;

int main() {
	string num16;
	cin>>num16;
	int num10 = 0;
	
	char l[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	
	for(int i = 0; i < num16.length(); i++) {
		int temp;
		if(num16[i]>='A' && num16[i]<='F') {
			if(num16[i] == 'A') {
				num10 +=  10 * pow(16, num16.length()-1-i);
			}
			else if(num16[i] == 'B') {
				num10 += 11 *pow(16, num16.length()-1-i);
			}
			else if (num16[i] == 'C') {
				num10 += 12 *pow(16, num16.length()-1-i);
			}
			else if(num16[i] == 'D') {
				num10 += 13 * pow(16, num16.length()-1-i);
			}
			else if(num16[i] == 'E') {
				num10 += 14 * pow(16, num16.length()-1-i);
			}
			else if(num16[i] == 'F') {
				num10+= 15*pow(16, num16.length()-1-i);
			}
		}
		else {
			temp = num16[i] - '0';
			num10 += temp *pow(16, num16.length()-1-i);
		}
	}
	cout << num10;
	
	return 0;
}
