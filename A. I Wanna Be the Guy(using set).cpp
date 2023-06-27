// Again solved using set
#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  set <int> s;
  int p;
  cin >> p;
  for (int i = 1; i <= p; i++) {
    int num;
    cin >> num;
    s.insert(num);
  }
  int q;
  cin >> q;
  for (int i = 1; i <= q; i++) {
    int num;
    cin >> num;
    s.insert(num);
  }
    if (s.size() != n)
      cout << "Oh, my keyboard!\n";
    else
  cout << "I become the guy.\n";
}
