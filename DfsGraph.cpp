#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
  // cout << "ehfiodsz";
  visited[node] = true;
  cout << node << " ";
  for (int neighbor : adj[node]){
    if (!visited[neighbor]) {
      dfs(neighbor, adj, visited);
    }
  }
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> adj(n+1);
  for (int i = 1; i <= n; i++){
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  // adj[1] = {2, 3, 4};
  // adj[2] = {1, 4};
  // adj[3] = {1};
  // adj[4] = {1, 2, 5};
  // adj[5] = {4};
  vector<bool> visited(n, false);
  dfs(1, adj, visited);

  return 0;
}