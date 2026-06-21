#include<bits/stdc++.h>
using namespace std;

void getnum(int start, int last, int target, bool &found) {
	vector<int> sum;
	
	for(int i = start; i < last; i++) {
		sum.push_back(i);
		
		if (accumulate(sum.begin(), sum.end(), 0) == target) {
			found = true;
			
			for (int j = 0; j < sum.size(); j++) {
				cout << sum[j];
				if (j != sum.size()-1) cout<< " ";
				
			}
			cout << endl;
		} 
	}
	
}

int main() {
	int num;
	bool found = false;
//	vector<int> v;
	
	cin >> num;
	
	for(int i = 1; i < num/2+2; i++) {
		getnum(i, num/2+2, num, found);
	}
	
	if (found == false) cout << "No";
	
	return 0;
}
