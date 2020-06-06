#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9 
using namespace std;

int n,k;
int a[100001];
int DP[100001]; //DP[i] = min cost to reach cell i

int c(int i, int j){
	return abs(a[i]-a[j]);
}

int main () {
	ios::sync_with_stdio(0);
    cin.tie(0);

	cin >> n >> k;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		DP[i]=INF;
	}
	
	DP[0]=0; 
	
	for (int i=0;i<n;i++){
		for (int j=1;j<=k&&i+j<n;j++){
			DP[i+j]=min(DP[i+j],DP[i]+c(i,i+j));
		}
	}
	
	cout << DP[n-1] << endl;
	
	return 0;	
}
