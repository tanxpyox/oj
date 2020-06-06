#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main () {
    int n,temp,ans=0;
    cin >> n;
    vector<int> a;
    for (int i=0;i<n;i++) {
        a.clear();
        for (int j=0;j<3;j++) {
            cin >> temp;
            a.push_back(temp);
        }
        if (count(a.begin(),a.end(),1) >= 2) {ans++;}
    }
    cout << ans << endl;
    return 0;
}
