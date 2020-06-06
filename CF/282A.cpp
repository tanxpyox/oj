#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n,ans=0;
    cin>>n;
    string cmd;
    for(int i=0;i<n;i++)
    {
        cin>>cmd;
        if(cmd[0]=='+' || cmd[1]=='+')
            ans++;
        else if(cmd[0]=='-' || cmd[1]=='-')
            ans--;
    }
    cout << ans << endl;
}
