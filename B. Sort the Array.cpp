#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  vector <int> v;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    v.push_back(num);
  }
  if (is_sorted(v.begin(), v.end())) {
    cout << "yes\n";
    cout << v[0] << " " << v[0] << endl;
    return 0;
  }


}
