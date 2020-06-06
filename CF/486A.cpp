#include <cstdio>
using namespace std;
 
int main () {
    long long n;
    scanf("%I64d", &n);
    if (n&1)
        printf("%I64d\n", -n+n/2);
    else
        printf("%I64d\n", n/2);
    return 0;
}
