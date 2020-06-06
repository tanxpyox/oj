#include <iostream>
#include <string>
using namespace std;
int main () {
    int n;
    cin >> n;
    string a[n];
    for (int i =0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n;i++) {
        if (a[i].size()<=10) {
            cout << a[i] << endl;
        }
        else cout << *a[i].begin() << a[i].size()-2 << *a[i].rbegin() <<endl;
    }
    return 0;
}
