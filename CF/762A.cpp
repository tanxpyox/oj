#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iterator>
using namespace std;
 
int main () {
	long long n;
	cin >> n;
	vector<long long> factors;
	for (long long i=1;i<=sqrt(n);i++){
		if (n%i==0) {
			factors.push_back(i);
			if ((double)i!=sqrt(n)) factors.push_back(n/i);	
		}
	}
	sort(factors.begin(),factors.end());
	int k; cin >> k;
	if (k>factors.size()) {
		cout << -1 <<endl;
	} else {
		cout << factors[k-1] << endl;
	}
}
