#include <iostream>
using namespace std;
 
int main () {
	int n,m;
	cin >> n >> m;
	string x;
	cin >> x;
	
	while (m--){
		int t1,t2;
		char c1,c2;
		cin >> t1 >> t2 >> c1 >> c2;
		t1--; t2--;
		for (int i=t1;i<=t2;i++){
			if (x[i]==c1){
				x[i]=c2;
			}
		}
	}
	cout << x << endl;
}
