#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main () {
	int n;
	n=6;
	vector<int> line;
	
	int sum=0;
	
	for (int i=0;i<n;i++){
		int t;
		cin >> t;
		line.push_back(t);
		sum+=t;
	}
	
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i==j) continue;
			for (int k=0;k<n;k++){
				if (i==k||j==k) continue;
				
				int x = line[i]+line[j]+line[k];
				if (x ==sum-x) {
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
 
}
