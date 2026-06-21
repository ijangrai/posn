#include<bits/stdc++.h>
using namespace std;

int binary(int num) {
	if(num==0) return 0;
	
	binary(num/2);
	cout << num%2;
	
	return 0;
}

int main() {
	int num;
	cin >> num;
	
	binary(num);

}
