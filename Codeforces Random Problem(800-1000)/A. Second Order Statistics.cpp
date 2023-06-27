#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  set <int> s;
  for (int i = 1; i <= n; i++) {
    int num;
    cin >> num;
    s.insert(num);
  }
  if (s.size() == 1) cout << "NO\n";
  else {
    cout << *(++s.begin()) << endl;
  }
}

