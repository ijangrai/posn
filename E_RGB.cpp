#include<bits/stdc++.h>
using namespace std;

int colorMix(int c1, int c2) {
	int cMix = (c1+c2)/2;
	return cMix;
}

void mixRGB(int r1, int g1, int b1, int r2, int g2, int b2) {
	int rMix = colorMix(r1, r2);
	int gMix = colorMix(g1, g2);
	int bMix = colorMix(b1, b2);
	
	cout << rMix << " " << gMix << " " << bMix;
}

int main() {
	
	int r1,g1,b1,r2,g2,b2;
	
	cin>>r1>>g1>>b1>>r2>>g2>>b2;
	
	mixRGB(r1, g1, b1, r2, g2, b2);
	
	
	return 0;
}
