#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
 
void removeplus(string &a) {
    for (int i=0;i<a.size()&&a[i]=='+';i++) {
        a.erase(a.begin()+i);
        i--;
    }
}
 
int main () {
    char a;
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    removeplus(str);
    cout << str[0];
    for (int i=1;i<str.size();i++) {
        cout << '+' << str[i];
    }
    cout << "\n";
    return 0;
}
