#include <iostream>
#include <string>
#include <cmath>
#define LL long long
using namespace std;

int main () {
	string s;
	int ans=0,maxs=-1;
	char t='0';
	
	cin >> s;
	
	for (int i=0;i<s.size();i++){
		if (t!=s[i]){
			maxs=max(maxs,ans);
			t = s[i];
			ans =1;
		} else {
			ans++;
		}
	}
	
	maxs=max(maxs,ans);
	cout << maxs << endl;
	return 0;
}
