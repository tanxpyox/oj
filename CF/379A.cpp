#include <cstdio>
using namespace std;
 
int main () {
    int a,b,ans=0;
    scanf("%d%d",&a,&b);
    ans = a;
    while (a>=b) {
        ans += a/b;
        a = a%b + a/b;
    }
    printf("%d\n",ans);
    return 0;
}
