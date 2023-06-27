#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
void answer ();
const ll N = 1000007;
vector <bool> isprime(N, 1);
int main () {
  optimize()
  isprime[0] = isprime [1] = false;
  for (int i = 2; i <= N; i++) {
      if (isprime[i]) {
        for (int j = 2 * i; j <= N; j += i) {
          isprime[j] = false;
      }
    }
  }
  answer();
}
void answer() {
  int n; cin >> n;
  int a1 = 4, a2 = n - a1;
  while(true) {
    if ((isprime[a1] == false) && (isprime[a2] == false)) { // a1 = 4, a2 = 11
      cout << a1 << " " << a2 << endl;
      break;
    }
    else {
      if (isprime[a1]) {
        a1++;
        a2--;
      }
      if (isprime[a2]) {
        a1++;
        a2--;
      }
    }
  }
}


