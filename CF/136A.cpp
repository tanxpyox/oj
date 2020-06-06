#include <cstdio>
#include <map>
using namespace std;
 
int main() {
    int n;
    scanf("%d",&n);
    map<int,int> a;
    for (int i=1;i<=n;i++) {
        int temp;
        scanf("%d",&temp);
        a[temp] = i;
    }
    for (int i=1;i<=n;i++) {
        printf("%d",a[i]);
        (i==n) ? printf("\n") : printf(" ");
    }
    return 0;
}
