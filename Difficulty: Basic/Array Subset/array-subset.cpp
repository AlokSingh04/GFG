class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int,int> map;
        for(int i : a){
            map[i]++;
        }
        
        for(int i : b){
            map[i]--;
            if(map[i] < 0) return 0;
        }
        
        return 1;
    }
};