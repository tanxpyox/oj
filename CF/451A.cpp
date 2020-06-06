#include <iostream>
#include <string>
using namespace std;
 
const string ans[] = {"Malvika","Akshat"};
 
int main() {
    int n,m;
    cin >> n >> m;
    cout << ans[min(n,m)%2] << endl;
    return 0;
}
