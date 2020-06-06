#include <iostream>
#include <string>
using namespace std;
 
void u(string &a) {
    for (int i=0;i<a.size();i++) {
        a[i] = toupper(a[i]);
    }
}
 
int main () {
    string a,b;
    cin >> a >> b;
    u(a);
    u(b);
    cout << a.compare(b) << endl;
    return 0;
}
