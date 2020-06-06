#include <map>
#include <iostream>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	map<int,int> last;
	for (int i=0;i<n;i++){
		int t;
		cin >> t;
		last[t]=i;
	}
	int min = 2147483647;
	int ans = -1;
	
	for (map<int,int>::iterator it = last.begin();it!=last.end();++it){
		if (min>it->second){
			min = it->second;
			ans = it->first;
		}
	}
	cout << ans << endl;
	
}
