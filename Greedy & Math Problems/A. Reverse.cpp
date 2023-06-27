#include <bits/stdc++.h>
using namespace std;
int main () {
  int t;
  cin >> t;
  while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=1;i<=n;i++) cin>>ar[i];
        int ind ;
        int val;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(ar[i]==i)v.push_back(ar[i]);
            else
            {
                ind = i;
                val = i;
                break;
            }
        }
        for(int i = ind+1;i <= n ;i++)
        {
            if(ar[i]==val)
            {
                for(int j=i;j>=ind;j--)v.push_back(ar[j]);
                for(int j=i+1;j<=n;j++)v.push_back(ar[j]);
                break;
            }
        }
        for(int i=0;i<n;i++)cout<<v[i]<<" ";
        cout<<endl;
    }
}
