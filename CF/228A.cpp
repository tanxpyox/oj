#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    vector<int> a(4);
    for(int i=0; i<4; ++i) {
        scanf("%d",&a[i]);
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    printf("%d\n",4-a.size());
    return 0;
}
