#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    vector <int> a = v; // Coppying all element to vector a from v
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (v[i] != a[1]) {
            cout << i + 1 << "\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}
