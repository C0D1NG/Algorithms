#include<bits/stdc++.h>

#define INF 1e9
#define NIL -1

using namespace std;


struct Graph{
    int vertices;
    vector<vector<int>> adj;

    Graph(int size);

    void add_edge(int u, int v, bool undirected=true){
        adj[u].push_back(v);
        if(undirected)
            adj[v].push_back(u);
    }
};


struct BFSNode{
    int processed;
    int distance;
    int parent;
};


Graph::Graph(int size){
    /***
     * Creates a graph of the given size
     * 
     * @param size number of node of the graph.
    */
    vertices = size;
    for(int i=0;i<size;i++){
        vector<int> v;
        adj.push_back(v);
    }
}


vector<BFSNode> BFS(Graph g, int source){
    /***
     * Performs Breadth-first search on the graph.
     * 
     * @param g the graph whoose BFS is to be computed.
     * @param source the source node for the BFS.
     * 
     * @return vector of type BFSNode containing the BFSTree.
    */
    vector<BFSNode> info (g.vertices);
    for(int i=0;i<g.vertices;i++){
        if(i!=source){
            info[i].processed=false;
            info[i].distance=INF;
            info[i].parent=NIL;
        }
    }
    info[source].distance=0;
    info[source].parent=NIL;
    info[source].processed=true;
    queue<int> q;
    q.push(source);
    int u;
    while(!q.empty()){
        queue<int> itr(q);
        u=q.front();
        q.pop();
        for(int v : g.adj[u]){
            if(!info[v].processed){
                info[v].distance = info[u].distance + 1;
                info[v].parent = u;
                info[v].processed=true;
                q.push(v);
            }
        }
        info[u].processed=true;
    }
    return info;
}

void print_path(Graph g, int s, int v, vector<BFSNode> info){
    /***
     * Prints the vertices on a shortest path from source to destination
     * assuming that BFSTree has already been computed.
     * 
     * @param g graph on which shortest path is to be found.
     * @param s source node.
     * @param v destination node.
     * @param info BFSTree.
    */
    if(v==s)
        cout<<s<<endl;
    else if(info[v].parent==NIL)
        cout<<"No path from "<<s<<" to "<<v<<" exists"<<endl;
    else{
        print_path(g, s, info[v].parent, info);
        cout<<v<<endl;
    }
}


int main(){
    Graph g = Graph(8);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(3, 5);
    g.add_edge(4, 5);
    g.add_edge(4, 6);
    g.add_edge(5, 6);
    g.add_edge(5, 7);
    g.add_edge(6, 7);
    vector<BFSNode> BFSinfo = BFS(g, 2);
    print_path(g, 2, 7, BFSinfo);
    return 0;
}