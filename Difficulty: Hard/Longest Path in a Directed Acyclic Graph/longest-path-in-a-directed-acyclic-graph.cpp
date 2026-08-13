class Solution {
public:
    vector<int> maxDistance(int V, int src, vector<vector<int>> &edges) {
        
        vector<int> dp(V, INT_MIN);
        dp[src] = 0;

        unordered_map<int, vector<pair<int,int>>> adj;
        vector<int> indegree(V, 0);

        for(int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            int c = edges[i][2];

            adj[a].push_back({b, c});
            indegree[b]++;
        }
        queue<int> q;

        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        while(!q.empty()) {
            int u = q.front();
            q.pop();

            // Relax edges
            for(int i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i].first;
                int w = adj[u][i].second;

                if(dp[u] != INT_MIN) {
                    dp[v] = max(dp[v], dp[u] + w);
                }

                indegree[v]--;

                if(indegree[v] == 0)
                    q.push(v);
            }
        }

        return dp;
    }
};