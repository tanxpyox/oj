#include <iostream>
using namespace std;
 
int main () {
    int n,sum=0;
    double ans=0;
    cin >> n;
    for (int i=0;i<n;i++) {
        int t;
        cin >> t;
        if (t) {
            sum++;
        }
        ans = max(ans,(double)sum/(double)(i+1));
    }
    cout << ans << endl;
}
