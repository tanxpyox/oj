#include <iostream>
#include <string>
using namespace std;
 
int main () {
    string a;
    cin >> a;
    (a.find('H')!=string::npos || a.find('Q')!=string::npos || a.find('9')!=string::npos) ? cout << "YES" << endl : cout<< "NO" << endl;
    return 0;
}
