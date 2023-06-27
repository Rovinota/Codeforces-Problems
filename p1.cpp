#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin>>s;

    char a='0', b='0', c='0';
    int cnt=0, n=s.size();

    for (int i=0; i<n; i++) {

        if (s[i]==a || s[i]==b || s[i]==c) // ollipops
            continue;
        else if (s[i]!=a && a=='0') {
            cnt++;
            a = s[i]; // a = l
        }
        else if (s[i]!=b && b=='0') {
            b = s[i]; // b = 0
        }
        else if (s[i]!=c && c=='0') {
            c = s[i]; // c = i
        }
        else {
            a=s[i], b='0', c='0';
            cnt++;
        }

        //cout<<a<<" "<<b<<" "<<c<<endl;
    }

    cout<<cnt<<endl;

    return;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
        solve();

    return 0;
}
