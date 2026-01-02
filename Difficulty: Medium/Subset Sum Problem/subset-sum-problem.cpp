class Solution {
  public:
    bool solve(int i, vector<int>& arr, int target) {
        if (target == 0)
            return true;

        if (i == arr.size() || target < 0)
            return false;

        return solve(i + 1, arr, target - arr[i]) ||
               solve(i + 1, arr, target);
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        return solve(0, arr, sum);
    }
};