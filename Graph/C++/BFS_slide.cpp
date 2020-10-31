#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 100
int V, E;
bool visited[MAX];
int path[MAX];
vector<int> graph[MAX];

void BFS(int s) {
	for (int i = 0; i < V; i++) {
		visited[i] = false;
		path[i] = -1;
	}
	queue<int> q;
	visited[s] = true;
	q.push(s);
	// to be continued
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		for (int i = 0; i < graph[u].size(); i++) {
			int v = graph[u][i];
			if (!visited[v]) {
				visited[v] = true;
				q.push(v);
				path[v] = u;
			}
		}
	}
}

void printPath(int s, int f) {
	int b[MAX];
	int m = 0;
	if (f == s) {
		cout << s;
		return;
	}
	if (path[f] == -1) {
		cout << "No path" << endl;
		return;
	}
	// to be continued
	while (true) {
		b[m++] = f;
		f = path[f];
		if (f == s) {
			b[m++] = s;
			break;
		}
	}
	for (int i = m - 1; i >= 0; i--) {
		cout << b[i] << " ";
	}
}

void printPathRecursion(int s, int f) {
	if (s == f)
		cout << f << " ";
	else {
		if (path[f] == -1)
			cout << "No path" << endl;
		else {
			printPathRecursion(s, path[f]);
			cout << f << " ";
		}
	}
}

int main() {
	int u, v;
	cin >> V >> E;
	for (int i = 0; i < E; i++) {
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	int s = 0;
	int f = 5;
	BFS(s);
	printPath(s, f);
	return 0;
}
