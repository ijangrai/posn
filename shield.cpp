#include<bits/stdc++.h>
using namespace std;

int main() {
	char c;
	int size;
	// (j, i) = (x, y)
	cin >> c >> size;
	
	for(int i = 0; i < size*2+1; i++) {
		for(int j = 0; j < size*2+1; j++) {
			if (i == size || j == size || i == j || i + j ==size*2) {
				cout << "+";
			}
			else {
				if ( i-j == size || abs(j-i) == size || (i + j >= size && (i < size && j < size)) || (i+j >= size) && ((i-j)<=size) && (j < size) || (((j-i <= size-1)) && (j > size)) && (j+i<=size*3)){
					cout << c;
				}
				else {
					cout << ".";
				}
			}
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
}
