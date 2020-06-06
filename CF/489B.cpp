#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main () {
    int n,m;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i=0;i<m;i++) {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    int apos=n-1,bpos=m-1;
    while (apos>=0&&bpos>=0) {
        if (abs(a[apos]-b[bpos])<=1) {
            ans++;
            apos--;
            bpos--;
        } else if (a[apos]-b[bpos]>1) {
            apos--;
        } else if (b[bpos]-a[apos]>1) {
            bpos--;
        }
    }
    cout << ans << endl;
}
