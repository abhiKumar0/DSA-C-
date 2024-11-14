#include <iostream>
#include <queue>
#include <bits/stdc++.h>
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



int main()
{
  int n;
  cout << "Number of node: ";
  cin >> n;

  vector<vector<int>>adj = adjacencyList(n);
  for (int i = 1; i <= n; i++) {
    cout << "Node " << i << " is connected to: ";
    for (int j: adj[i]) {
      cout << j << " ";
    }
    cout << endl;
  } 
 /*
 //****** Adjacency list **********
  vector<vector<int>> adj(n+1);
  for (int i = 0; i < n; i++) {
    // u represents starting node and v represents ending node
    int u, v;
    cout << "Enter starting and ending nodes of the edge\n"; 
    cin >> u >> v;
    // cin >> v;
    adj[u].push_back(v); // add v to u's adjacency list
    adj[v].push_back(u); // u to v's adjacency list
  }

  for (int i = 1; i <= n; i++) {
    cout << "Node " << i << " is connected to: ";
    for (int j: adj[i]) {
      cout << j << " ";
    }
    cout << endl;
  } */

  // *********** Adjacency Matrix **********
  // int adj[n+1][n+1];

  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     adj[i][j] = 0;
  //   }
  // }

  // for (int i = 0; i < n; i++) {
  //   int u, v; //starting and ending node of an edge
  //   cout << "Enter starting and ending nodes of an edge: ";
  //   cin >> u >> v;
  //   adj[u][v] = 1;
  //   adj[v][u] = 1;
  // }
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     cout << adj[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}