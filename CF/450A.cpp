#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
 
int n,m;
 
bool cmp (pair<int,int> a, pair<int,int> b) {
    if (ceil((double)a.first/m) == ceil((double)b.first/m)) return a.second>b.second;
    else return ceil((double)a.first/m) > ceil((double)b.first/m);
}
 
int main () {
    vector<pair<int,int> > arr;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        int t1,t2=i+1;
        cin >> t1;
        arr.push_back(make_pair(t1,t2));
    }
    
    sort(arr.begin(),arr.end(),cmp);
    
    cout << (*arr.begin()).second << endl;
}
