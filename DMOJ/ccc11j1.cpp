#include <bits/stdc++.h>
#define LL long long
#define INF 2e9
using namespace std;

int a,b;

int main () {
	ios::sync_with_stdio(0);
  cin.tie(0);

	cin >> a >> b;

	if (a>=3&&b<=4)
		cout << "TroyMartian\n";
	if (a<=6&&b>=2)
		cout << "VladSaturnian\n";
	if (a<=2&&b<=3)
		cout << "GraemeMercurian\n";

	return 0;
}
