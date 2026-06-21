#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	float gradea;
	float gradeb;
	float gradec;
	
	cin >> a >> b >> c;
	
	if(a < 50 || b < 50 || c < 50) cout << "fail";
	else {
		
		if (a>=50 && a < 55) gradea = 1;
		else if (a >= 55 && a <60) gradea = 1.5;
		else if (a >= 60 && a < 65) gradea = 2;
		else if (a >= 65 && a < 70) gradea = 2.5;
		else if (a >= 70 && a < 75) gradea = 3;
		else if (a >= 75 && a < 80) gradea = 3.5;
		else if (a >= 80) gradea = 4;
		
		if (b>=50 && b < 55) gradeb = 1;
		else if (b >= 55 && b <60) gradeb = 1.5;
		else if (b >= 60 && b < 65) gradeb = 2;
		else if (b >= 65 && b < 70) gradeb = 2.5;
		else if (b >= 70 && b < 75) gradeb = 3;
		else if (b >= 75 && b < 80) gradeb = 3.5;
		else if (b >= 80) gradeb = 4;
		
		if (c>=50 && c < 55) gradec = 1;
		else if (c >= 55 && c <60) gradec = 1.5;
		else if (c >= 60 && c < 65) gradec = 2;
		else if (c >= 65 && c < 70) gradec = 2.5;
		else if (c >= 70 && c < 75) gradec = 3;
		else if (c >= 75 && c < 80) gradec = 3.5;
		else if (c >= 80) gradec = 4;
		
		
		cout << ((gradea*2)+(gradeb*2.5)+(gradec*1.5))/6;
	}
	
	
	
	return 0;
}
