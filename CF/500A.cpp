#include <cstdio>
#include <vector>
using namespace std;
 
int main () {
    int n,t,pos;
    scanf("%d%d",&n,&t);
    vector<int> a;
    while (--n) {
        int temp;
        scanf("%d",&temp);
        a.push_back(temp);
    }
    for (int i=0;i<t;i+=a[i]) {
        if (i == t-1) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
