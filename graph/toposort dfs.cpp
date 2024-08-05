#include <iostream>
#include <list>
#include <map>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;
class graph {
public:
  map<int, list<int>> adj;
  void addedge(int u, int v, int direction) {
    // direction =1->directed
    // direction =0-> undirected
    if (direction == 1) {
      adj[u].push_back(v);
    } else {
      adj[u].push_back(v);
      adj[v].push_back(v);
    }
  }
  void print() {
    for (auto i : adj) {
      cout << i.first << "-> {";
      for (auto j : i.second) {
        cout << j << " ,";
      }
      cout << "}" << endl;
    }
  }
  void topoSortDfs(int src, map<int, bool> &visited, stack<int> &st)

  {
    visited[src] = true;
    for (auto nbr : adj[src]) {
      if (!visited[src]) {
        topoSortDfs(nbr, visited, st);
      }
    }
    st.push(src);
  }
};
int main() {
  graph g;
  g.addedge(0, 1, 1);
  g.addedge(1, 3, 1);
  g.addedge(3, 5, 1);
  g.addedge(3, 4, 1);
  g.addedge(5, 6, 1);
  g.addedge(4, 6, 1);
  g.addedge(6, 7, 1);
  // g.print();
  int n = 8;
  map<int, bool> visited;
  stack<int> st;
  for (int node = 0; node < n; node++) {
    if (!visited[node]) {
      g.topoSortDfs(node, visited, st);
    }
  }
  cout << "printing topo order" << endl;
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
}
