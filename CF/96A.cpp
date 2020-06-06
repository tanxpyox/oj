#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;
 
bool isDangerous(string a) {
    pair<int,int> max = make_pair(-1,-1);
    for (int i=0;i<a.size();i++) {
        if (a[i]!=max.first) {
            max.first = a[i];
            max.second = 1;
        }
        else max.second++;
        if (max.second==7) return true;
    }
    return false;
}
 
int main () {
    string a;
    cin >> a;
    isDangerous(a) ? cout << "YES" <<endl : cout << "NO" << endl;
    return 0;
}
