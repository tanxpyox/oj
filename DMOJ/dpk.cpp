#include <bits/stdc++.h>
#define LL long long
#define INF 2e9
using namespace std;

int n,k;
int a[100001];
bool DP[100001]; //whether Tom wins by playing first
bool visited[100001];

/*
int c(int x){
	if (visited[x]) return DP[x];
	visited[x]=1;
	for (int i=0;i<n;i++){
		if (x-a[i]==0) return DP[x]=1;

		bool t = c(x-a[i]);
		if (!t) return DP[x]=1;
	}
	return DP[x]=0;
} */ //top-down implementation

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(DP,false,sizeof(DP));
	memset(visited,false,sizeof(visited));

	cin >> n >> k;
	int t;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		DP[a[i]]=1;
		visited[a[i]]=1;

	}

	for (int i=0;i<a[0];i++){
		DP[i]=0;
	}

	for (int i=0;i<=k;i++){
		if (visited[i]) continue;
		visited[i]=1;
		for (int j=0;j<n&&i+a[j]<=k;j++){
			DP[i+a[j]]=(DP[i+a[j]]||!DP[i]);
		}
	}

	if (DP[k])
		cout << "First\n";
	else
		cout << "Second\n";

	return 0;
}
