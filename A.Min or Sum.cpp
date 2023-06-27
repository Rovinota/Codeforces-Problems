// Problem: A. And Then There Were K
// Contest: Codeforces - Codeforces Round #721 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1527/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	int power = log2(n);
	int ans = pow(2, power) - 1;
	cout << ans << endl;
}


int main () {
	int t;
	cin >> t;
	while (t--) solve();
}