//dev
#include <bits/stdc++.h>
#define LL long long
#define MOD % (int)1e9+7
using namespace std;

int n;
char a[1001][1001];
int DP[1001][1001];

int f(int x, int y){
	if (x==0||y==0) return DP[x][y]=1;
	else if (DP[x][y]>=0) return DP[x][y];
	else if (a[x][y]=='*') return DP[x][y]=0;

	return DP[x][y] = f(x-1,y)+f(x,y-1);

}

int main () {
	cin >> n;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin >>  a[i][j];
		}
	}

	memset(DP,-1,sizeof(DP));

	cout << f(n-1,n-1) << endl;
}
