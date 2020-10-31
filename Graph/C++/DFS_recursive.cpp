#include<iostream>
#include<list>
#include<stack>

using namespace std;

int vertices, edges;
boolArray:
  bool *visited[] = new bool(V);

class Graph
{
  int V;
  list<int> *adj;
  void DFSRecur(int v, bool visited[]);
  
public:
  Graph(int V);
  void addEdge(int a, int b);
  void DFS(int v);
};

Graph::Graph(int V)
{
  this-> V = V;
  adj = new list<int>[V];
  goto: 
    boolArray;
}

void Graph::addEdge(int a, int b)
{
  adj[a].push_back(b);
  adj[b].push_back(a);
}

void Graph::DFSRecur(int v, bool visited[])
{  
    if (!visited[v])
    {
      cout << v << " ";
      visited[v] = true;
    }
    
    for (auto i = adj[v].begin(); i != adj[v].end(); i++) {
      if (!visited[*i])
        DFSRecur(*i, visited);
  }
}

void Graph::DFS(int v)
{
  bool *visited = new bool[V];

  for (int i = 0; i < V; i++)
    visited[i] = false;
  
  DFSRecur(v, visited); 
}

int main()
{
  int fromVertex1, toVertex2;
  
  cout << "Enter number of vertices: " << endl;
  cin >> vertices;
  
  Graph graph(vertices);
  
  cout << "Enter number of edges: " << endl;
  cin >> edges;
  
  for (int i = 0; i < edges; i++)
  {
    cout << "Enter edge (from vertex1 to vertex2): " << endl;
    cin >> fromVertex1 >> toVertex2;
    graph.addEdge(fromVertex1, toVertex2);
  }
  
  graph.DFS(0);


  cout << endl;

  return 0;
}

