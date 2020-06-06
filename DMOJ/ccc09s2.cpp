#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9
using namespace std;

int r,l;
int a[31];
set<int> ans;

int main () {
	ios::sync_with_stdio(0);
  cin.tie(0);

	cin >> r >> l;
	int t,n=r;
	memset(a,0,sizeof(a));

	for (int i=r-1;i>=0;i--){
		for (int j=0;j<l;j++){
			cin >> t;
			a[i] = t + (a[i]<<1);
		}
	}

	ans.insert(a[0]);
	t=a[0];

	for (int i=1;i<n;i++){
		t^=a[i];
		ans.insert(t);
	}

	cout << ans.size() << endl;

	return 0;
}
