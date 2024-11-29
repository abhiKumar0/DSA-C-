#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> adjacencyList(int n) {
  vector<vector<int>> adj(n+1);
  //number of vertices = n, edges = m
  for (int i = 0; i < n; i++) {
    // u represents starting node and v represents ending node
    int u, v;
    cout << "Enter starting and ending nodes of the edge\n"; 
    cin >> u >> v;
    // cin >> v;
    adj[u].push_back(v); // add v to u's adjacency list
    adj[v].push_back(u); // u to v's adjacency list
  }
}


int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    vector<vector<int>> g1 = adjacencyList(n);
    
    


    return 0;
}