#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9
using namespace std;

int n;

bool comp(pair<int,int> a, pair<int,int> b) {
	return a.first< b.first;
}

int main (){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	vector<pair<int,int> > v;
	int t1,t2;
	
	for (int i=0;i<n;i++){
		cin >> t1 >> t2;
		v.push_back(make_pair(t1,t2));
	}
	
	sort(v.begin(),v.end(),comp);
	
	for (int i=1;i<n;i++){
		if (v[i-1].second>v[i].second){
			cout << "Happy Alex\n";
			return 0;
		}
	}
	
	cout << "Poor Alex\n";
	
	return 0;
}
