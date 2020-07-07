#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> adj[100];
bool vis[100];

void dfs(int node, int& size) {
    if (vis[node]) {
        return;
    }
    vis[node] = true;
    size++;

    for (auto it : adj[node]) {
        dfs(it, size);
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m; cin >> n >> m;
    int ans = 0;
    int team1 = 0, team2 = 0;

    //create adjacent list
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }

    //number of pacifist players
    int pacifists = 0;
    for (int i = 1; i <= n; i++)
        if (adj[i].size() == 0) {
            pacifists++;
            vis[i] = true;
        }

    //in case their number is odd, Team1 start with an extra player.
    if (pacifists % 2)
        team1++;

    //number of elementary chains of players
    for (int i = 1; i <= n; i++) {
        int size = 0;
        if (!vis[i] && adj[i].size() == 1) {
            dfs(i, size);
            if (size % 2) {
                team1 < team2 ? team1++ : team2++;
            }
        }

    }

    // number of elementary cycle
    for (int i = 1; i <= n; i++) {
        int size = 0;
        if (!vis[i] && adj[i].size() == 2) {
            dfs(i, size);
            if (size % 2) {
                ans++;
            }
        }
    }

    if (team1 != team2)
        ans++;
    cout << ans;

}
