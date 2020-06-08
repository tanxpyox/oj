#include <iostream>
#include <queue>
#define LL long long
using namespace std;

int main () {
	LL n;
	cin >> n;
	queue<LL> ans;
	ans.push(n);
	
	while (true){
		if (n==1) break;
		if (n%2) 
			n = 3*n+1;
		else 
			n/=2;
		ans.push(n);
	}
	
	while (!ans.empty()){
		cout << ans.front();
		if (ans.size()!=1) cout << " ";
		ans.pop();
	}
	cout << endl;
	return 0;
}
