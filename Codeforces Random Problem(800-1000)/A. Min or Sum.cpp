// Problem: A. Min Or Sum
// Contest: Codeforces - Codeforces Round #772 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1635/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	map <int, int> mp;
	for (int i = 0; i < n; i++) {
		if (log2(a[i]) == 0) {
			mp[a[i]]++;
			if (mp[a[i]] > 1) {
				a[i] = a[i]/2;
				mp[a[i]]++;
			}
		}
		else {
			int power = log2(a[i]);
			int a[i] = pow(2, power);
			mp[a[i]]++;
			if (mp[a[i]] > 1) {
				a[i] = a[i]/2;
				mp[a[i]]++;
			}
		}
	}
	int a[n]; for (int i = 0; i < n; i++) cout << a[i] << " ";
}


int main () {
	int t;
	cin >> t; 
	while (t--) solve();
}