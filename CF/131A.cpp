#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
 
bool isCapSegment(string a,int start) {
    for (int i=start;i<a.size();i++) {
            if (islower(a[i])) return false;
        }
        return true;
}
 
bool isCap(string a,int start) {
    if (a.size()==1&&islower(a[0])) return true;
    else if (islower(a[0])) return isCapSegment(a,start+1);
    else return isCapSegment(a,0);
}
 
int main () {
    string a;
    cin >> a;
    if (isCap(a,0)) {
        for (int i=0;i<a.size();i++) {
            if (islower(a[i])) a[i]=toupper(a[i]);
            else a[i] = tolower(a[i]);
        }
    }
    cout << a << endl;
    return 0;
}
