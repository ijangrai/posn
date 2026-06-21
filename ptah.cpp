#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	
	string txt="ABCDEFG";
	cin>>txt;
	int tl=txt.length();
	char m[tl*2*tl][tl*tl];
	memset(m, '.', sizeof(m));
	int shy=tl*2;
	int shx=tl;
	
	
	for(int k=0;k<tl;k++) {
		for(int z=0;z<=k;z++) {
			for(int i=0;i<tl*tl*2;i++) {
				for(int j=0;j<tl*tl;j++) {
					if(abs(i-tl)+abs(j-tl)<=tl&&j<tl) m[i+(tl*tl)-(tl*k)-tl+(shy*z)][j+(shx*k)]=txt[z];
				}
		
			}
		}
		
	}
	
	
	for(int i=0;i<tl*tl*2-1;i++) {
		for(int j=0;j<tl*tl;j++) {
			cout<<m[i+1][j];
		}
		cout<<'\n';
	}
	
	
	
	return 0;
}
