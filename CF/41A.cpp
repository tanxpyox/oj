#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string a,b;
    cin >> a >> b;
    reverse(b.begin(),b.end());
    (a==b) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
