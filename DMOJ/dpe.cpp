#include <bits/stdc++.h>
#define LL long long
#define INF (LL)2e9
#define NINF (LL)-2e9
using namespace std;

int n,cap,sum;
int v[101];
LL t;
LL w[101];
LL DP[100001][101];   //DP over minimising weight
					  //DP[V][i] = Min weight of a bag with V value,
					  //           using only the first i items
bool visited[100001][101];

LL knapsack(int val, int i){
	if (val==0) return DP[val][i]=0;
	else if (val<0) return INF;
	if (i==0) return DP[val][i]=INF;
	if (visited[val][i]) return DP[val][i];
	
	visited[val][i] = true;
	return DP[val][i] = min(knapsack(val,i-1),knapsack(val-v[i],i-1)+w[i]);
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	sum=0;
	
	cin >> n >> cap;
	for (int i=0;i<n;i++){
		cin >> w[i+1] >> v[i+1];
		sum+=v[i+1];
	}
	
	memset(visited,0,sizeof(visited));
	memset(DP,0,sizeof(DP));
	

	for (int i=sum; i>=0; i--){
		t = knapsack(i,n);
		if (t<=cap) {
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}
