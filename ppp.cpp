#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,prev;
    stack<string>st;
    set<string>noDup;
    map<string,bool> ans;
    int n;
    cin>>n;
    while(n--) {
        cin >> s;
        st.push(s);

    }
    while(!st.empty())
    {

        prev=st.top(); // prev = "Imam"  // imam, siam, imam
        if(!ans[prev]) { // ans[prev] = false;
        cout<<prev<<'\n';
        ans[prev]= true;
      }
      st.pop();


    }
  }
