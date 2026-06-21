#include<bits/stdc++.h>
using namespace std;

//char arr[91][11500];

int main() {
	int h = 5;
	
	string txt;
	cin>>txt;
	cin>>h;
	int txtlength = txt.length();
	char arr[h*2+1][(h*2+1)*(txtlength)-2*(txtlength-1)];
	memset(arr, '.', sizeof(arr));
	
	int sh = h*2-1;
	
	for(int n=0;n<txtlength;n++) {
		for(int i=0;i<h*2+1;i++){
		for(int j=0;j<(h*2+1)*txtlength;j++) {
			if(abs(i-h)+abs(j-h)==h) {
//				cout << n*sh;
				arr[i][j+(n*sh)] = txt[n];
			}
		
		}
	}
	}
	
	
	for(int i=0;i<h*2+1;i++) {
		for(int j=0;j<(h*2+1)*(txtlength)-2*(txtlength-1);j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	
	
	
	
	return 0;
}
