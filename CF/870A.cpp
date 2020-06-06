#include <iostream>
using namespace std;
 
int main () {
	int n,m;
	cin >> n >> m;
	int fqa[11],fqb[11];
	for (int i=1;i<=9;i++){
		fqa[i]=0;
		fqb[i]=0;
	}
	int t;
	for (int i=0;i<n;i++) {
		cin >> t;
		fqa[t]=1;
	}
	for (int j=0;j<m;j++){
		cin >> t;
		fqb[t]=1;
	}
	int a=-1,b=-1;
	for (int i=1;i<=9;i++){
		if (fqa[i]==1&&a==-1) a = i;
		if (fqb[i]==1&&b==-1) b = i;
		if (fqa[i]==1&&fqb[i]==1) {
			cout << i << endl;
			return 0;
		}
	}
	
	if (a==b) cout << a << endl;
	else if (a<b) cout << a << b <<  endl;
	else cout << b << a << endl;
	
}
