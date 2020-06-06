#include <iostream>
using namespace std;
 
int main () {
    int x,y;
    cin >> x >> y;
    int z = y-x;
    int n;
    cin >> n;
    int ans;
    switch ((n-1)%6){
        case 0: ans = x; break;
        case 1: ans = y; break;
        case 2: ans = z; break;
        case 3: ans = -x; break;
        case 4: ans = -y; break; 
        case 5: ans = -z; break;
    }
    ans = ((int)ans%1000000007+1000000007) % ((int)1000000007);
    cout << ans << endl;
    
}
