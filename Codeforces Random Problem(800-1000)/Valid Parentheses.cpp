/*#include <bits/stdc++.h>
using namespace std;
bool solve (string s) {
  deque <char> st;
  int len = s.size();
  for (int i = 0; i < len; i++) {
    if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
          st.push_front(s[i]);
        }
    else {
      if (st.empty()) return false;
      else {
        if (st[0] == '(' and (s[i] == '}' or s[i] == ']'))
              return false;
        if (st[0] == '{' and (s[i] == ')' or s[i] == ']'))
              return false;
        if (st[0] == '[' and (s[i] == '}' or s[i] == ')'))
              return false;
         st.pop_front();
      }
    }

  }
  if(st.empty()) return true;
  else return false;
}
int main () {
  string s;
  cin >> s;
  solve (s);
  if (true) cout << "True\n";
  else cout << "False\n";
}
*/
class Solution {
public:
    bool isValid(string str) {
        stack <char> s;
        int len = str.length();
        for(int i=0;i<len;i++){
            if(str[i]=='('||str[i]=='{'||str[i]=='[')
                s.push(str[i]);
            else if(str[i]==')'||str[i]=='}'||str[i]==']'){
                if(s.empty())
                    return false;
                else if(str[i]==')'&&s.top()!='(')
                    return false;
                else if(str[i]=='}'&&s.top()!='{')
                    return false;
                else if(str[i]=='['&&s.top()!=']')
                    return false;
                else s.pop();
            }

        }
        if(s.empty())
            return true;
        else
            return false;

    }
};

// time com:O(n)
//space com:O(n)
// time com:O(n)
//space com:O(n)
