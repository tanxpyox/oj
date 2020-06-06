#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main () {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans=0,i=n-1;
    while (m>0) {
        ans++;
        m-=a[i];
        i--;
    }
    cout << ans << endl;
}
