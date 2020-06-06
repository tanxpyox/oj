#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9 
using namespace std;

int n;
int a[100001][3];
int DP[100001][3]; //DP[i][j] = max happiness at day i, 
				   //           did activity j at day i-1.

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i=0; i<n; i++) {
		for (int j=0;j<3;j++){
			cin >> a[i][j];
			DP[i][j]=-1;   //initialise
		}
	}
		
	//base case
	DP[0][0] = a[0][0];
	DP[0][1] = a[0][1];
	DP[0][2] = a[0][2];
	
	//DP
	for (int i=1;i<n;i++){
		for (int j=0;j<3;j++){     //activity today
			int t=-1;
			for (int k=0;k<3;k++){ //activity yesterday
				if (j==k) continue;
				t = max(t,DP[i-1][k]+a[i][j]);
			}
			DP[i][j]=t;
		}
	}
/*	
	for (int i=0;i<n;i++){
		printf("%d %d %d\n",DP[i][0],DP[i][1],DP[i][2]);
	}*/
	
	cout << max(DP[n-1][0],max(DP[n-1][1],DP[n-1][2])) << endl;
	
	return 0;	
}
