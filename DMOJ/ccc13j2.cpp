#include <bits/stdc++.h>
#define LL long long
#define INF 2e9 
using namespace std;

string s;

bool check(char c){
	if (c=='I'||c=='O'||c=='S'||c=='H'||c=='Z'||c=='X'||c=='N') return true;
	else return false;
} 

int main () {
	ios::sync_with_stdio(0);
    cin.tie(0);

	cin >> s;
	
	for (int i=0;i<s.size();i++){
		if (check(s[i])==false){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;	
}
