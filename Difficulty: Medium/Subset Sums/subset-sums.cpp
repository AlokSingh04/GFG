class Solution {
  public:
    void sumFunc(vector<int>& arr,vector<int>& res,int index,int sum){
        if(index == arr.size()){
            res.push_back(sum);
            return;
        }
        
        // include.
        sumFunc(arr,res,index+1,arr[index]+sum);
        
        // exclude.
        sumFunc(arr,res,index+1,sum);
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> res;
        sumFunc(arr,res,0,0);
        
        return res; 
    }
};