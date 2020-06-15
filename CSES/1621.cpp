#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	set<int> ans;
	
	int t;
	
	while (n--){
		cin >> t;
		ans.insert(t);
	}
	
	cout << ans.size() << endl;
	
	return 0;
}
