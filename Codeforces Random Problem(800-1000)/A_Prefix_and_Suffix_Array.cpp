#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void answer();
const ll N = 1000000007;
int main () {
    int t; cin >> t;
    while(t--) {
        answer();
    }
    return 0;
}
void answer() {
    int n; cin >> n;
    string s1, s2;
    for (int i = 0; i < 2*n - 2; i++) {
        string s; cin >> s;
        if (s.size() == n-1) {
            if (s1.empty()) s1 = s;
            else s2 = s;
        }
    }
    reverse(s1.begin(), s1.end());
    if (s1 == s2) cout << "YES\n";
    else cout << "NO\n";
}
