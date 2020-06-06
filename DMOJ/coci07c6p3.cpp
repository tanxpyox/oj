#include <bits/stdc++.h>
#define LL long long
#define INF 2e5
using namespace std;

int n;
int a[101];
set<int> ans;

bool check(int x){
	for (int i=0;i<n;i++){
		if (a[i]%x!=a[0]%x) return 0;
	}
	return 1;
}


int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

 	for (int i=0;i<n;i++){
 		cin >> a[i];
  }

	sort(a,a+n);

	int diff = a[1]-a[0];

	for (int i=1;i<=sqrt(diff);i++){
		if (diff%i==0){
			if (i!=1&&check(i)) ans.insert(i);
			if (i*i!=diff&&check(diff/i)) ans.insert(diff/i);
		}
	}

	for (set<int>::iterator it=ans.begin();it!=ans.end();++it){
		cout << *it;
		if (it!=--ans.end()) cout << " ";
	}
	cout << endl;

    return 0;
}
