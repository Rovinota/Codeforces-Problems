#include <bits/stdc++.h>
using namespace std;
void solve () {
  int n;
  cin >> n;
  //vector <int> v;
  int a[51] = {0};
  for (int i = 0; i < 2 * n; i++) {
    int  num;
    cin >> num;
    a[num]++;
    if(a[num]==1) cout << num  << " ";
  }
  cout << endl;
}
int main () {
  int t;
  cin >> t;
  while(t--) solve ();
}


