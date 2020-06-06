#include <iostream>
#include <cstdlib>
#include <utility>
using namespace std;
 
int main() {
    int temp;
    pair<int,int> pos;
    for (int i = 0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin >> temp;
            if (temp == 1) {
                pos.first = i;
                pos.second = j;
            }
        }
    }
    cout << abs(pos.first-2)+abs(pos.second-2) << endl;
    return 0;
}
