#include <iostream>
using namespace std;
int main () {
    int n,place;
    cin >> n >> place;
    int a[n];
    for (int i =0;i<n;i++) {
        cin >> a[i];
    }
    int larger = a[place-1],ans=0;
    for (int i=0;i<n;i++) {
        if (a[i]>=larger && a[i]>0) {
            ans++;
        }
    }
    cout << ans << endl;
}
