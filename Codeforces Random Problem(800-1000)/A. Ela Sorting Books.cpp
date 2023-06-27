#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int


void answer ();
const ll N = 1000000007;
int main () {
  optimize()
  int t; cin >> t;
  while(t--) answer();
}
void answer() {
  int n, k; cin >> n >> k;
  int req_size = n / k;
  string s; cin >> s;
  map <char, int>  mp;
  for (int i  = 0; i < n; i++) mp[s[i]]++;
//  for (int i = 1; i <= 26; i++) {
//    if (mp[i+96]) cout << mp[i+96] << " ";
//  }
  for (int i = 0; i < k; i++) {
    string temp = "";
    string ans = "";
    int f = 1;
    while(temp.size() != req_size) {
      for (int j = 1; j <= 26; j++) {
        if (f && mp[j+96] == 0) {
          ans += (j+96);
          f = 0;
        }
        if (mp[j+96] != 0) {
          temp += (j+96);
          mp[j+96]--;
        }
        if(temp.size() == req_size) break;
      }
    }
    if (ans.empty()) {
      char ans = 96 + (req_size+1);
      cout << ans;
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans;
    ans.clear();
    temp.clear();
  }
  cout << endl;
}


