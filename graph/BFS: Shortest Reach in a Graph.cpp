#include <bits/stdc++.h>
using namespace std;


class Graph {
     vector<int> adj[1001];
     int size;
    public:
        Graph(int n) {
           size=n;  
        }
    
        void add_edge(int u, int v) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    
        vector<int> shortest_reach(int start) {
            vector<int> visited(size,-1);
            //cout<<endl;
            queue<int>q;
            q.push(start);
            visited[start] = 0;
            q.push(-1);
            int temp,i, dist = 6;
            while(!q.empty()){
                temp = q.front();
                //cout<<temp<<endl;
                q.pop();
                if(temp == -1){
                    dist+=6;
                    if(!q.empty())  
                    q.push(-1);
                    continue;  
                }
                for(i=0;i<adj[temp].size();i++){
                    if(visited[adj[temp][i]]==-1){
                        visited[adj[temp][i]]=dist;
                        q.push(adj[temp][i]);
                    }
                }
            }
            return visited;
        }
    
};
int main() {
    int queries;
    cin >> queries;
        
    for (int t = 0; t < queries; t++) {
      
		int n, m;
        cin >> n;
        // Create a graph of size n where each edge weight is 6: 
        Graph graph(n);
        cin >> m;
        // read and set edges
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            // add each edge to the graph
            graph.add_edge(u, v);
        }
		int startId;
        cin >> startId;
        startId--;
        // Find shortest reach from node s
        vector<int> distances = graph.shortest_reach(startId);

        for (int i = 0; i < distances.size(); i++) {
            if (i != startId) {
                cout << distances[i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

