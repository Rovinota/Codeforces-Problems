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
  answer();
}

void answer() {
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    int move = 0;
    int a1, a2, a3;
    for (int i = 0; i < n; i++) {
        int digit1 = s1[i] - '0';
        int digit2 = s2[i] - '0';
        a3 = INT_MAX;
        a1 = abs(digit1 - digit2);
        a2 = digit1 + (10 - digit2);
        if (digit1 > digit2) a3 = (digit2+10) - digit1;
        move += min(a1, min(a2, a3));
    }
    cout << move << endl;
}
