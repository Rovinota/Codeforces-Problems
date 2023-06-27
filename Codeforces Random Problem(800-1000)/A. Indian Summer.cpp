#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	vector< pair<string, string> >v(n);

	for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
	 sort(v.begin(), v.end());
	int d = distance (v.begin(), unique(v.begin(), v.begin() + n));

	cout << d << endl;

}
