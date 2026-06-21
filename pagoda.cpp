#include<bits/stdc++.h>
using namespace std;

int main() {
	int h=3;
	int stack=2;
	char ch;
	
	
	cin >> ch >> h >> stack;
	
	int c = 1;
	
	for(int s = 0; s < stack; s++) {
		for(int i = 0; i < h; i++) {
			for(int q = 0; q < h*stack-c; q++) cout << ".";
			
			
			for(int z = 0; z < s+1; z++) {
				for(int j = 0; j < (2*i+1); j++) cout << ch;
		
				if (z < s) {
					for(int j = 0; j < h*2-1-(2*i); j++) cout << ".";
				}
			}
			for(int q = 0; q < h*stack-c+1; q++) cout << ".";
			
		c++;
		cout << endl;
		}
	}
	
	
	
	return 0;
}






//
//...........X............
//..........XXX...........
//.........XXXXX..........
//........XXXXXXX.........
//.......X.......X........
//......XXX.....XXX.......
//.....XXXXX...XXXXX......
//....XXXXXXX.XXXXXXX.....
//...X.......X.......X....
//..XXX.....XXX.....XXX...
//.XXXXX...XXXXX...XXXXX..
//XXXXXXX.XXXXXXX.XXXXXXX.
//
//
//.....*......
//....***.....
//...*****....
//..*.....*...
//.***...***..
//*****.*****.
