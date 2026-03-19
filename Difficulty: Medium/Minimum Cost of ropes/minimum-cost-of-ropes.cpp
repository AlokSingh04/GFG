class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>, greater<int>> pq;
        
        for(int x : arr){
            pq.push(x);
        }
        
        int res = 0;
        while(pq.size()!=1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
        
            res += x+y;
            pq.push(x+y);
        }
        
        return res;
    }
};