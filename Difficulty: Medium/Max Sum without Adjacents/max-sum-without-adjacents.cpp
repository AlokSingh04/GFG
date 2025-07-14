// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        vector<int> ans(arr.size());
        ans[0] = arr[0];
        ans[1] = max(arr[0],arr[1]);

        for(int i=2;i<ans.size();i++){
            ans[i] = max(ans[i-1],ans[i-2]+arr[i]);
        }

        return ans.back();
    }
};