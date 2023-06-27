#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main () {
  int t; cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    priority_queue <int, vector <int> , greater <int>> q1;
    for (int i = 0; i < n; i++) {
      int num; cin >> num;
      q1.push(num);
    }
    for (int i = 0; i < m; i++) {
      int num; cin >> num;
      q1.pop();
      q1.push(num);
    }
    long long int sum = 0;
    while(!q1.empty()) {
      sum += q1.top();
      q1.pop();
    }
    cout << sum << endl;
  }
}
