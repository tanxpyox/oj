#include <iostream>
#include <cmath>
#define LL long long
using namespace std;

int main () {
	LL n;
	cin >> n;
	for (LL i=1;i<=n;i++){
		cout << (i-1)*(i+4)*(i*i-3*i+4)/2 << endl;
	}
	
	return 0;
}
