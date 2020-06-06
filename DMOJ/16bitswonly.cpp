#include <bits/stdc++.h>
#define LL long long
#define INF 2e5
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--){
      LL a,b,p;
      cin >> a >> b >> p;
      if (a*b==p)
        cout << "POSSIBLE DOUBLE SIGMA\n";
      else
        cout << "16 BIT S/W ONLY\n";
    }

    return 0;
}
