#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	set<char> charac;
	cin >> n;
	while(n--) {
		char tem;
		cin >> tem;
		charac.insert(tem);
	}
	
	vector<char> vc(charac.begin(), charac.end());
	int vectorsize = vc.size();
	
	
	
	
	
//	vector<char> vc = {'A', 'B', 'C', 'D'};
//	int vectorsize = 4;
	int r = 2;
	
	if (vectorsize%2==0) {
		for(int t = 0; t < r; t++) {
			for(int i = 0; i < vectorsize; i++) {
//				cout << "X ";
				if ( t == 0) {
					for(int j = 0; j < vectorsize; j++) cout << " ";
				}
				
				for(int j = 0; j < vectorsize-i-1; j++) cout << " ";
				
				for(int j = 0; j < i*2+1; j++) cout << vc[i%vectorsize];
				
				for(int j = 0; j < vectorsize-i; j++) cout << " ";
				
				if (t > 0) {
					for(int j = 0; j < vectorsize-i-1; j++) cout << " ";
				
					for(int j = 0; j < i*2+1; j++) cout << vc[i%vectorsize];
				
					for(int j = 0; j < vectorsize-i-1; j++) cout << " ";
				}
				
				cout << endl;
			}
		}
	}
	
	else {
		for(int t = 0; t < r; t++) {
			for(int i = 0; i < vectorsize; i++) {
//				cout << "X ";

				if (t == 0) {
					for(int j = 0; j < vectorsize; j++) cout << " ";
				}
				
				for(int j = 0; j < vectorsize-i-1; j++) cout << " ";
				
				for(int j = 0; j < i*2+1; j++) cout << vc[i%vectorsize];
				
				for(int j = 0; j < vectorsize-i; j++) cout << " ";
				
				if(t>0) {
					for(int j = 0; j < vectorsize-i-1; j++) cout << " "; 
				
					for(int j = 0; j < i*2+1; j++) cout << vc[i%vectorsize];
				
					for(int j = 0; j < vectorsize-i-1; j++) cout << " ";
				}
				
				cout << endl;
			}
						
			
		}
	}
	
	
	
	
	return 0;
}
