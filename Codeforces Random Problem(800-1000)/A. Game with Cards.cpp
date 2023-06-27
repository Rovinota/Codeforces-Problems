#include <bits/stdc++.h>
using namespace std;
void solve () {
	int n;
	cin >> n;
	int a[n];
int 	alice_m_c = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		alice_m_c = max (alice_m_c, a[i]);
	}
	int bob_m_c = 0;
	int m;
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		bob_m_c = max(bob_m_c, b[i]);
	}
	if (alice_m_c == bob_m_c) {
    cout << "Alice\nBob\n";
	}
	else if  (alice_m_c > bob_m_c) {
    cout << "Alice\nAlice\n";
	}
	else {
    cout << "Bob\nBob\n";
	}
}
int main () {
  int t;
  cin >> t;
  while(t--) solve();
}
