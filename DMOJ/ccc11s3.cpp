#include <bits/stdc++.h>
#define LL long long
#define INF 2e5
using namespace std;

int compute(int m, int x, int y){ //0 = crystal, 1 = empty, 2 = boundary
	if (m==1){
		if (y==0){
			if (x>=1&&x<=3) return 0;
			else return 1;
		} else if (y==1) {
			if (x==2) return 0;
			else if (x==1||x==3) return 2; 
		} else if (y==2){
			if (x==2) return 2;
		} 
		return 1;
	} 
	
	
	int s = compute(m-1,x/5,y/5);
	if (s==2) {
		return compute(m-1,x-(x/5)*5,y-(y/5)*5);
	} else return s;
	
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--){
    	int m,x,y;
    	cin >> m >> x >> y;
    	if (compute(m,x,y)==0) 
    		cout << "crystal\n";
    	else
    		cout << "empty\n"; 
    }

    return 0;
}
