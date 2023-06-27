#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define Pair pair<ll, ll>
const ll N = 1e5+7;
vector <Pair> adjList[N];
ll cost[N];

void answer() {
    for (auto &u : adjList) u.clear();

    ll node, edge, start, end; cin >> node >> edge >> start >> end;
    if (start > end) swap(start, end);

    for (ll i = 0; i < edge; i++) {
        ll u, v, w; cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    for (int i = 0; i <= node; i++) cost[i] = 1e18;
    cost[start] = 0;

    // djkstra
    priority_queue<Pair, vector<Pair>, greater<Pair>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        ll currNode = pq.top().second;
        pq.pop();

        for (auto &u : adjList[currNode]) {
            // Relaxation
            if (cost[u.first] > cost[currNode] + u.second) {
                cost[u.first] = cost[currNode] + u.second;
                pq.push({u.second, u.first});
            }
        }
    }

    if (cost[end] == 1e18) {
        cout << "unreachable" << endl;
        return;
    }

    cout << cost[end] << endl;
}
int main () {
  optimize()
  ll t; cin >> t;
  for (ll i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        answer();
    }
}


