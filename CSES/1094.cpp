#include <iostream>
#include <string>
#include <cmath>
#define LL long long
using namespace std;

int main () {
	int n;
	cin >> n;
	
	int t=0,c=0;
	LL ans=0;
	
	if (n==1){
		cout << 0 << endl;
		return 0;
	}
	
	cin >> t;
	c = t;
	
	for (int i=1;i<n;i++){
		cin >> t;
		if (t<c){
			ans += c-t;
		} else {
			c = t;
		}
	}
	
	cout << ans << endl;
	return 0;
}
