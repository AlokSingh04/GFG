class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);
        for(int i = 0; i < edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
            
        vector<int>indegree(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
               indegree[adj[i][j]]++;
            }
        }
        
        vector<int>ans;
        queue<int> q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0) q.push(i);
        }
        
        while(q.size()>0){
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(auto it: adj[temp]){
                indegree[it]--;
                if( indegree[it]==0) q.push(it);
            }
        }
        
        return ans ;
    }
};