 #include <bits/stdc++.h>
 using namespace std;
 #include <ext/pb_ds/assoc_container.hpp>
 #include <ext/pb_ds/tree_policy.hpp>
 using namespace __gnu_pbds;
 
 #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 #define ll long long int
 void answer();
 
 int main () {
   optimize()
    answer();
 }
 
 void answer() {
    string s; cin >> s;
    map <char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    char ans ;
    int num = INT_MIN;
    for (int i = 0; i < s.size(); i++) {
        if (num < mp[s[i]]) {
            num = mp[s[i]];
            ans = s[i];
        }
    }
    cout << ans << endl;
 }
 