#include <iostream>
#define LL long long
using namespace std;

int main () {
	LL n,t;
	cin >> n;
	
	LL ans = n*(n+1)/2;
	
	while (--n){
		cin >> t;
		ans-=t;
	}

	cout << ans << endl;
	return 0;
}
