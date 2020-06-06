#include <iostream>
using namespace std;
 
int main () {
	int n,a,b;
	cin >> n >> a >>b;
	string x;
	cin >> x;
	cout << (int)(x[a-1]!=x[b-1]) << endl;
}
