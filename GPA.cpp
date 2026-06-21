#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	vector<float> grade;
	vector<float> nuakit;
	float gradet;
	float nuakitt;
	float gpa = 0;
	float sumnuakit = 0;
	
	cin >> t;
	
	int t1 = t;
	
	
	while(t--) {
		cin >> gradet >> nuakitt;
		
		grade.push_back(gradet);
		nuakit.push_back(nuakitt);
	}
	
	for(int i = 0; i < t1; i++) {
		gpa += grade[i]*nuakit[i];
		sumnuakit += nuakit[i];
	}
	
	gpa /= sumnuakit;
	
	cout << fixed << setprecision(2);
	cout << gpa;
	
	
	return 0;
}
