// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	ios_base::sync_with_stdio(0);
// 	char c='X';//cin>>c;
// 	int h=4;//cin>>h;
// 	int s=3;//cin>>s;
// 	char arr[s*h][s*h*2+1];
// 	memset(arr, '.', sizeof(arr));
	
	
	
	
	
// 	for(int i=0;i<s*h;i++) {
// 		for(int j=0;j<s*h*2;j++) {
// 			cout<<arr[i][j];
// 		}
// 		cout<<'\n';
// 	}
	
	
	
	
	
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	// int h, s; cin >> h >> s;
	int h=4, s=5;


	int y = h*s, x = 2*h*s, shift=h*(s-1);



	char arr[y][x];
	memset(arr, '.', sizeof(arr));


	for(int i = 0; i < s; i++) {
		for(int j = 0; j < i+1; j++) {
			for(int k = 0; k < h; k++) {
				for(int l = 0; l < 2*k+1; l++) {
					arr[k+(h*i)][l+(j*(h*2))+(h-k-1)+shift]='X';
				}
				
			}
			
		}
		shift-=h;
	}




	for(int i = 0; i < y; i++) {
		for(int j = 0; j < x; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
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
//.....XXXXX...XXXXX......     h=4 stack=3
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
//..*.....*...	  h=3 stack=2
//.***...***..
//*****.*****.
