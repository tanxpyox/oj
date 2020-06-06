#include <cstdio>
using namespace std;
 
bool judge(int x) {
    for(int i=2; i*i<=x; ++i) {
        if(x % i == 0)
            return true;
    }
    return false;
}
 
int main() {
    int n;
    scanf("%d", &n);
    for(int i=4; i<n; ++i) {
        if(judge(i) && judge(n-i)) {
            printf("%d %d\n", i, n-i);
            break;
        }
    }
    return 0;
}
