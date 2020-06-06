#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 
int main () {
    string open= "([{<";
    string close = ")]}>";
    string n;
    cin >> n;
    if (close.find(n[0])!=string::npos) {
        cout << "Impossible\n";
        return 0;
    }
    stack<char> possible;
    for (int i=0;i<n.size();i++) {
        if (open.find(n[i])!=string::npos) {
            possible.push('o');
        } else if (close.find(n[i])!=string::npos) {
            if (possible.empty()) {
                cout << "Impossible\n";
                return 0;
            } else {
                possible.pop();
            }
        }
    }
    if (!possible.empty()) {
        cout << "Impossible\n";
        return 0;
    }
    
    stack<char> brackets;
    int ans=0;
    for (int i=0;i<n.size();i++) {
        if (open.find(n[i])!=string::npos) {
            brackets.push(n[i]);
        } else if (close.find(n[i])!=string::npos) {
            if (brackets.top()!=open[close.find(n[i])]) ans++;
            brackets.pop();
        }
    }
    cout << ans << endl;
}
