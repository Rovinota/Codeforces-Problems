#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer();

int main () {
  optimize()
  int t; cin >> t;
  while(t--) answer();
}

void answer() {
    string s; cin >> s;
    int sz = s.size();
    if (sz == 1) {
        if (s[0] == '^') {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
        return;
    }
    int op = 0;
    if (s[0] == '_') op++;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '_') {
            if (s[i+1] == '_' || i == s.size()-1) {
                s.insert(i+1, 1, '^');
                op++;
            }
            if (s[i-1] == '_') op++;
        } 
    }
    cout << op << endl;
}
