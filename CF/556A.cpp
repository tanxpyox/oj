#include <bits/stdc++.h>
#define LL long long
#define INF (int)2e9
using namespace std;
 
int n;
 
int main (){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	stack<char> st;
	char t;
	
	while(n--){
		cin >> t;
		if (!st.empty()&&st.top()!=t){
			st.pop();
		} else {
			st.push(t);
		}
		
	}
	
	cout << st.size() << endl;
	
	return 0;
}

