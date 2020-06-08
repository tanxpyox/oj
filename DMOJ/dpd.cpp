#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9
#define NINF (int)-2e9
using namespace std;

int n,cap;
LL v[101];
int w[101];
LL DP[100001];   //DP[w] = Max value with cap w

LL knapsack(int N, int W){
	memset(DP,0,sizeof(DP));
	LL maxs=-1;
	for (int i=N;i>=1;i--){
		for (int j=W;j-w[i]>=0;j--){
			DP[j] = max(DP[j],DP[j-w[i]]+v[i]);
		}
	}
	
	return DP[W];
}


int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> cap;
	for (int i=0;i<n;i++){
		cin >> w[i+1] >> v[i+1];
	}

	cout << knapsack(n,cap) << endl;

	return 0;
}
