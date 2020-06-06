#include <cstdio>
#include <cmath>
#include <map>
using namespace std;
 
map<int,long long> a;
 
int main () {
    int t,n;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        if (a[n]!=0) {
            printf("%I64d\n",a[n]);
            continue;
        } else {
            long long ans=n;
            ans*=n+1;
            ans/=2;
            long long x = floor(log2(n));
            x = (1<<(x+1))-1;
            ans-= 2*x;
            a[n]=ans;
            printf("%I64d\n",ans);  
        }   
    }
}
