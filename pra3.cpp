#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t, n;
   string s;
   cin >> t;
   while (t--)
   {
      cin >> n;
      map<string, int> m;
      vector<string> a;
      string b(n, '0');
      for (int i = 0; i < n; i++)
      {
         cin >> s;
         m[s]++;
         a.push_back(s);
      }
      for (int i = 0; i < n; i++)
      {
         if (a[i].size() == 1)
            continue;
         for (int j = 1; j < a[i].size(); j++)
         {
            string c = "", d = "";
            for (int k = 0; k < j; k++)
               c += a[i][k];

            for (int k = j; k < a[i].size(); k++)
               d += a[i][k];
               cout << c << " " << d << endl;
            if (m[c] and m[d])
            {
               b[i] = '1';
               break;
            }
         }
      }
      cout << b << endl;
   }
   return 0;
}
