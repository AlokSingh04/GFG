// User function template for C++
class Solution {
  public:
    int sum(vector<int>& arr, int n){
        if(n<0) return 0;
        
        return arr[n] + sum(arr,n-1);
    }
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        return sum(arr,arr.size()-1);
    }
};