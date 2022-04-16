// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int vertex,int parent,vector<int> adj[],bool vis[]){
       
       vis[vertex]=true;
       bool isCycle=false;
       for(auto x:adj[vertex]){
           if(vis[x] && x==parent)
               continue;
           if(vis[x])
               return true;
           isCycle |=dfs(x,vertex,adj,vis);
       }
       return isCycle;
   }
   bool isCycle(int V, vector<int> adj[]) {
       // Code here
       bool vis[V+10]={false};
       for(int i=0;i<V;i++){
           if(vis[i])
               continue;
           if(dfs(i,0,adj,vis))
               return true;
       }
       return false;
   }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends
