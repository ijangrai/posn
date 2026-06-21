#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	char c;
	vector<int> isok;
	
	
	
	while(t--) {
		stack<char> s;
		string p;
		cin>>p;
		
		
		
		for(int i=0;i<p.length();i++) {
			if(p.length()%2!=0) {
				isok.push_back(0);
				break;
			}
			
			if(p[i]=='(' || p[i] == '[' || p[i] == '{') {
				s.push(p[i]);
			}
			else {
				s.push(p[i]);
				c = s.top();
				s.pop();
				
				if (c==')'&&p[i-1]=='(') isok.push_back(1);
				else if(c=='}'&&p[i-1]=='{') isok.push_back(1);
				else if(c==']'&&p[i-1]=='[') isok.push_back(1);
				else isok.push_back(0);
				
				break;
			}
		}
	}
	
	for(int i=0;i<isok.size();i++) {
		if(isok[i]==1) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}
	
	
	return 0;
}
