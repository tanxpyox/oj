#include <iostream>
#include <cmath>
#define LL long long
using namespace std;

int main () {
	int t;
	cin >> t;
	
	int y,x;
	while (t--){
		cin >> y >> x;
		
		if (y==1 && x==1) {
			cout << 1 << endl;
			continue;
		}
		
		LL layer = max(y,x);
		LL incre = 2*layer-1;
		
		LL mid = (layer-1)*(layer-1) + (incre+1)/2;
		LL sq = layer*layer;
				
		if (y==x){
			cout << mid << endl;
			continue;
		} else if (x>y){
			if (layer%2){
				cout << sq-y+1 << endl;
			} else {
				cout << mid - (x-y) << endl;
			}
		} else if (y>x){
			if (layer%2) {
				cout << mid - (y-x) << endl;
			} else {
				cout << sq - x +1 << endl;
			}
		}	
		
	}
	
	return 0;
}
