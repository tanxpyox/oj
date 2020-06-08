#include <iostream>
#include <queue>
#define LL long long
using namespace std;

int main () {
	int n;
	cin >> n;
	
	if (n==1) {
		cout << "1\n";
		return 0;
	} else if (n==4){
		cout << "2 4 1 3\n";
		return 0;
	} else if (n<4){
		cout << "NO SOLUTION\n";
		return 0;
	} 
	
	queue<int> ans;
	
	for (int i=n-(n%2); i>0; i-=2){
		ans.push(i);
	} 
	
	for (int i=n-(1-n%2); i>0; i-=2){
		ans.push(i);
	} 
	
	while (!ans.empty()){
		cout << ans.front();
		if (ans.size()!=1) cout << " ";
		ans.pop();
	}
	
	cout << endl;
	
	return 0;
}
