#include <iostream>
#include <map>
#include <cmath>
using namespace std;
 
map<int,int> index;
 
int main () {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        int t;
        cin >> t;
        index[t]=i+1;
    }
    long long ans=0;
    for (map<int,int>::iterator it = index.begin(); it != (--index.end());) {
        ans += abs((it)->second-(++it)->second);
    }
    cout << ans << endl;
}
