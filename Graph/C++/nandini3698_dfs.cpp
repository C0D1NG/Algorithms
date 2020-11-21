#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>adj[],vector<bool>& vis,int k){

    vis[k]=1;
    cout<<k<<" ";
    for(int x:adj[k])
        if(vis[x]==0)
            dfs(adj,vis,x);
}

int main(){

    int V = 7;
    vector<int>adj[V+1];
    adj[1].push_back(4);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[3].push_back(2);
    adj[4].push_back(1);
    adj[4].push_back(3);
    adj[5].push_back(7);
    adj[5].push_back(6);
    adj[6].push_back(5);
    adj[7].push_back(5);

    vector<bool>vis(V+1,0);
    for(int i=1;i<=V;i++)
        if(vis[i]==0)
            dfs(adj,vis,i);

    return 0;
}