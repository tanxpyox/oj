#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9
using namespace std;

int n;

int main (){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	int x=0,y=0,z=0;
	int t1,t2,t3;
	while(n--){
		cin >> t1 >> t2 >> t3;
		x+=t1;
		y+=t2;
		z+=t3;
	}
	
	if (x==0&&y==0&&z==0) 
		cout << "YES\n";
	else 
		cout << "NO\n";
	
	return 0;
}
