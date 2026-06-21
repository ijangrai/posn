#include <bits/stdc++.h>
using namespace std;

vector<int> toquin(int n) {
    vector<int> digit;
    
    while (n != 0) {
    	
    	
        int r = ((n%5)+5)%5;
        n = (n-r)/5;
        
        if (r > 2) {
            r -= 5;
            n += 1;
            
        }
        digit.push_back(r);
        
        
    }
    if (digit.empty()) digit.push_back(0);
    
    return digit;
}

int main() {
    int t;
    vector<string> show;
    
    cin >> t;
    
    
    for (int i = 0; i < t; i++) {
    	string temp = "";
        int n;
        
        cin >> n;
        
        vector<int> v = toquin(n);
        
        for(int j = 0; j < v.size(); j++) {
        	
        	if (j>0) temp += " ";
        	temp += to_string(v[j]);
		}
		
		show.push_back(temp);
		temp = "";
    }
    
    for (int i = 0; i < t; i++) {
    	cout << show[i] << endl;
	}
    
    
    
    
    
    
    
    
    return 0;
}

