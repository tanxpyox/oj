#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
void tolowercase(string &a) {
    for (int i=0;i<a.size();i++) {
        a[i] = tolower(a[i]);
    }
}
 
int main () {
    string n;
    cin >> n;
    tolowercase(n);
    for (int i=0;i<n.size();i++) {
        if (n[i] == 'a'||n[i] == 'e'||n[i] == 'i' ||n[i] == 'o'||n[i] ==  'u'||n[i]=='y') {
            n.erase(n.begin()+i);
            i--;
        }
    }
    for (int i=0;i<n.size();i++) {
        cout << "." << n[i];
    }
    cout << endl;
    return 0;
}
