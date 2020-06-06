#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9 
using namespace std;

int n;
int a[100001];
int DP[100001]; //DP[i] = min cost to reach cell i

int c(int i, int j){
	return abs(a[i]-a[j]);
}

int main () {
	ios::sync_with_stdio(0);
    cin.tie(0);

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		DP[i]=INF;
	}
	
	DP[0]=0; 
	
	for (int i=0;i<n;i++){
		if (i+1<n) DP[i+1]=min(DP[i+1],DP[i]+c(i,i+1));
		if (i+2<n) DP[i+2]=min(DP[i+2],DP[i]+c(i,i+2));
	}
	
	cout << DP[n-1] << endl;
	
	return 0;	
}
