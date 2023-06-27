/* My wrong code
#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  string s;
  char ch;
  while (t--) {
    cin >> s >> ch;
    int d = 0;
    d = s.size();
    int becount = 0;
    int afcount = 0;
    for (int i = 0;; i++) {
        if (s[i] == ch) break;
    else
        becount++;

    }
    afcount = (d -  (becount + 1) );
    if (d > 1) {
     if (becount % 2 == 0 && afcount % 2 == 0)
      cout << "YES" << endl;
      else cout << "NO\n";
    }
    else {
      if (s[0] == ch) cout << "YES\n";
      else cout << "NO\n";
    }

  }
}

*/
// correct code from  fadil vaia:
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  start:
  while(t--) {
    string st;
    cin >> st;
    char ch;
    cin >> ch;
    for(int i = 0; i < st.size(); i++) {
      if(st[i] == ch and i % 2 == 0 and (st.size() - i - 1) % 2 == 0) {
        cout << "YES" << endl;
        goto start;
      }
    }
    cout << "NO" << endl;
  }

  return 0;
}

// Learning : goto statement uses, easy way thinking ability






