#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
	long long n,k;
	cin >> n >> k;
	cout << (long long)floor(log2(k&-k))+1 << endl;
}
