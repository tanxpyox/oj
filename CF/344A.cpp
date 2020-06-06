#include <iostream>
using namespace std;
 
int main(){
    int n,temp,p=0,ans=0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        if (temp!=p) {
            ans++;
            p = temp;
        }
    }
    cout << ans << endl;
    return 0;
}
