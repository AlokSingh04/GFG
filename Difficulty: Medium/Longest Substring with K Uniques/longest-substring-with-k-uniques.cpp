class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int> map;
        
        int i=0,j=0,mx=-1;
        while(i<s.size()){
            while(map.size()>k){
                map[s[j]]--;
                if(map[s[j]] == 0)
                    map.erase(s[j]);
                    
                j++;
            }
            map[s[i]]++;
            if(map.size()==k)
                mx = max(mx,i-j+1);
                
            i++;
        }
        return mx;
    }
};